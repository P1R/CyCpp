/*******************************************************
Escuela Superior de Ingenier�a Mec�nica y El�ctrica
Alumnos: 
        Perez-negr�n Rocha David Eugenio
        Osmar Trujillo Huazo
Equipo:9 
Profesor: Cort�s P�rez Alejandro
*******************************************************/
//también conocido como el método de Euler Mejorado
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class heun{
	double X0, Y0, Y_, h, hMax;
public:
	void lee(void);
	void imprime(void);
	double f(double, double);
	heun();
};
heun::heun(){
	X0 = Y0 = Y_ = h = hMax = 0.0;
}
double heun::f(double X0, double Y0){
	return (2*X0*Y0);
}

void heun::lee(void){
	cout << "Ingrese el valor X0:";
		cin >> X0;
	cout << "Ingrese el valor Y0:";
		cin >> Y0;
	cout << "Ingrese el tamaño de paso h:";
		cin >> h;
	cout << "Ingrese el valor X0+h Maximo:";
		cin >> hMax;
}

void heun::imprime(void){

	for(; X0 <= hMax; X0+=h){
		Y_ = Y0 + h*f(X0,Y0);
		Y0 = Y0 + ((h/2)*(f(X0,Y0)+f(X0+h,Y_)));
		cout << "el valor de Y(" << X0+h << ") " << "es:" << Y0 << endl;
	}
}

main(){
	heun A;
	A.lee();
	A.imprime();
}
