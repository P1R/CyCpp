/*******************************************************
Escuela Superior de Ingenier�a Mec�nica y El�ctrica
Alumnos: 
        Perez-negr�n Rocha David Eugenio
        Osmar Trujillo Huazo
Equipo:9 
Profesor: Cort�s P�rez Alejandro
*******************************************************/

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

struct RK{
	double X0, Y0, h, Xf, K1, K2, K3, K4;
public:
	void lee(void);
	void imprime(void);
	double f(double, double);
	RK(void);
};

RK::RK(void){
	X0 = Y0 = h = Xf = K1 = K2 = K3 = K4 = 0.0;
}

double  RK::f(double X0, double Y0){
	return(2*X0*Y0);
}

void RK::lee(void){
	cout << "Ingresa el valor de X0:";
		cin >> X0;
	cout << "Ingresa el valor de Y0:";
		cin >> Y0;
	cout << "Ingresa el tamaño de paso (h):";
		cin >> h;
	cout << "Ingresa hasta que X0 calcular:";
		cin >> Xf;
}

void RK::imprime(void){
		for(; X0 <= Xf; X0+=h){
			K1 = f(X0,Y0);
			K2 = f(X0+(h/2),Y0+(h/2)*K1);
			K3 = f(X0+h,Y0-(h*K1)+(2*h*K2));
			cout << "K1:" << K1 << endl
			     << "K2:" << K2 << endl
			     << "K3:" << K3 << endl;

			Y0 = Y0 + ((1/6)*(K1+(4*K2)+K3)*h);
		cout << "el valor de Y(" << X0+h << ") " << "es:" << Y0 << endl;
		}

}

main()
{
	RK A;
	A.lee();
	A.imprime();
}
