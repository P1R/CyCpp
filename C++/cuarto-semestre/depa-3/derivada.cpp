/*******************************************************
Escuela Superior de Ingenier�a Mec�nica y El�ctrica
Alumnos: 
        Perez-negr�n Rocha David Eugenio
        Osmar Trujillo Huazo
Equipo:9 
Profesor: Cort�s P�rez Alejandro
*******************************************************/

#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;

void DerivII(void);
void DerivI(void);

void DerivI (void){
float yp [3],x[3], y[3];

cout<<"dame los puntos de  la tabla:" << endl;

for(int i=0; i<3; i++){
    cin>>x[i];
}

cout<<"dame el valor de la funciones en los puntos:" << endl;

for (int i=0; i<3; i++){
    cin>>y[i];
    }

yp[2] =  (y[2]-y[1])/abs((x[0]-x[1]));
yp[1] =  (y[2]-y[0])/abs(2*(x[0]-x[1]));
yp[0] =  (y[1]-y[0])/abs((x[0]-x[1]));

 cout<< "la derivada atras  "  <<yp[0]<<endl;

 cout<<"la derivada central  "  <<yp[1]<<endl;

 cout<<"la derivada adellante  "  <<yp[2]<<endl;

 getchar();
}


void DerivII(void){  // checar bien este problemaaa!!! con matriz igual a 4 
	float A[5], B[5];
	int i;

	for(i = 0; i <= 4; ++i){
		cout << "ingresa X" << i << ":";
			cin >> A[i];
		cout << "ingresa F(X" << i << "):";
			cin >> B[i];
	}

	cout << "La segunda derviada hacia adelante es: ";
	cout << (B[4]-(2*B[3])+B[2])/pow(A[3]-A[2],2) << endl;
	cout << "La segunda derivada hacia atras es: ";
	cout << (B[2]-(2*B[1])+B[0])/pow(A[1]-A[0],2) << endl;
	cout << "La segunda derivada central es:";
	cout << (B[3]-(2*B[2])+B[1])/pow(A[2]-A[1],2) << endl;
getchar();
}


main()
{
	int op;
	
	do{
	cout << "PROGRAMA PARA CALCULAR PRIMERA Y SEGUNDA DERIVADA DE UNA FUNCION" << endl;
	cout << "1 para calcular la primer derivada" << endl;
	cout << "2 para calcular la segunda derivada" << endl;
	cout << "3 para salir" << endl;
	cout << "ingrese el numero de su opcion:";
		cin >> op;
	switch(op){
		case 1:
			DerivI();
			getchar();
			system("clear");
			break;
		case 2:
			DerivII();
                        getchar();
                        system("clear");
			break;
		case 3:
			exit(1);
			break;
	}

	}while(op > 0 && op < 4);
}

