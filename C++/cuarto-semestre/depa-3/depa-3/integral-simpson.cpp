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

class integ{
	double a, b, h, I;
	int N;
public:
	void lee(void);
	double f(double);
	void calcula(void);
	void imprime(void);
	integ();
};
integ::integ(){
	a = b = h = N = I = 0.0;
}
double integ::f(double x){
	return(pow(x,3));
}

void integ::lee(void){
	do{
	cout << "ingresa el valor del punto a:";
		cin >> a;
	cout << "ingresa el valor del punto b:";
		cin >> b;
	cout << "ingresa el N (valor en multiplos de 3):";
		cin >> N;
	}while(N%3 != 0);
	h = (b-a)/N;
}

void integ::calcula(){
	int i;
	double X = 0, Y = 0;
	for(i = 1; i < N; ++i){
		if(i%2 == 0)
			Y += 2*f(a+i*h);
		else
			X += 4*f(a+i*h);
	}
	I = (f(a) + X + Y + f(b))*(h/3);
}

void integ::imprime(){
	cout << "el valor de la integral X^3 es:" << I << endl;
	getchar();
}

main(){
	integ A;
	A.lee();
	A.calcula();
	A.imprime();
}
