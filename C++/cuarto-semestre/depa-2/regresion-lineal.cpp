/*******************************************************
Escuela Superior de Ingeniería Mecánica y Eléctrica
Alumnos:
    Perez-negrón Rocha David Eugenio
    Osmar trujillo huazo
Profesor:
    Cortés Pérez Alejandro
Programa de regresion lineal primer Orden
*************************************************/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

class recta{
    float *X, *Y, *X2, *XY;
    float sumX, sumY, sumX2, sumXY, A, B;
    int n, i, j;
public:
    void lee(void);
    void calcula(void);
    void imprime(void);
    recta(void);
};
recta::recta(){
    sumX = sumY = sumX2 = sumXY = A = B = 0.0;
}

void recta::lee(void){
    cout << "ingresa numero de puntos:";
        cin >> n;
    n-=1; // ponemos n-1 por que consideramos que en los arreglos se cuenta el 0
    X = (float *)malloc((sizeof(float))*n); // asignamos tamaño n a X, Y, X^2 y XY
    XY = (float *)malloc((sizeof(float))*n);
    X2 = (float *)malloc((sizeof(float))*n);
    Y = (float *)malloc((sizeof(float))*n);
     //
    for(i = 0; i <= n; ++i){
        cout << "ingresa el valor en X del punto " << (i+1) << ":";
            cin >> X[i];
        cout << "ingresa el valor en Y del punto " << (i+1) << ":";
            cin >> Y[i];
    }
}

void recta::calcula(void){

    for(i = 0; i <= n; ++i){ // llenamos los arreglos de valores X^2 y XY
        X2[i] = pow(X[i],2);
        XY[i] = X[i] * Y[i];
    }

    for(i = 0; i <= n; ++i){ //sacamos sumatorias de X, Y, X^2 y XY;
        sumX += X[i];
        sumY += Y[i];
        sumX2 += X2[i];
        sumXY += XY[i];
    }

    A = ((sumY*sumX2)-(sumXY*sumX)) / (((n+1)*sumX2)-pow(sumX,2));
    B = (((n+1)*sumXY)-(sumX*sumY)) / (((n+1)*sumX2)-pow(sumX,2));
}

void recta::imprime(void){
    //probamos que se almacenen bien los valores...
    for(i = 0; i <= n; ++i){
        cout << "valor punto" <<(i+1) << " (" << X[i] <<"," << Y[i] << ")"<<endl;
        cout << "valor punto X^2 " <<(i+1) << ": " << X2[i] <<endl;
        cout << "valor punto XY" <<(i+1) << ": " << XY[i] <<endl;
    }

        cout << "sumatoria en X: " <<sumX << endl;
        cout << "sumatoria en Y: " << sumY  << endl;
        cout << "sumatoria en X^2: " << sumX2 << endl;
        cout << "sumatoria en XY: " << sumXY << endl;

        cout << "la funcion de la recta es:" << A << "+" << B <<"X"<< endl;
}

main()
{
    recta A;
    A.lee();
    A.calcula();
    A.imprime();
}
