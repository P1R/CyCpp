/*******************************************************
Escuela Superior de Ingenier�a Mec�nica y El�ctrica
Alumnos: 
        Perez-negr�n Rocha David Eugenio
        Osmar Trujillo Huazo
Equipo:9 
Profesor: Cort�s P�rez Alejandro
*******************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class  euler{
	double X0, Y0, Y, hMax, h;
public:
	void lee(void);
	double f(double, double);
	void imprime(void);
	euler(void);
};

euler::euler(void){
	X0 = Y0 = Y = hMax = h = 0.0;
}
double euler::f(double X0, double Y0){
	return (2*X0*Y0);
}
void euler::lee(void){
	cout << "Ingresa el valor de X0:";
		cin >> X0;
	cout << "Ingresa el valor de Y0:";
		cin >> Y0;
	cout << "Ingresa el tamaño de paso(h):";
		cin >> h;
	cout << "Ingresa X0+h maxima para calcular:";
		cin >> hMax;
}

void euler::imprime(void){
	for(;X0 <= hMax; X0+=h){
		Y0 = Y0 + (h*f(X0,Y0));
	cout << "el valor de Y(" << X0+h << ") " << "es:" << Y0 << endl;
	}
}


main(){
	euler A;
	A.lee();
	A.imprime();
}

