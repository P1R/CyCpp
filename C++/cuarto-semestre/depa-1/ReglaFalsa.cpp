#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;

class Biseccion{
	double inf, sup, mitad, error;
	int ciclos;
public:
	Biseccion(void);
	void leerDatos(void);
	void Metodo(void);
	double f(double);
};

Biseccion::Biseccion(){
	inf = sup = mitad = error = 0.0;
	ciclos = 0;
}

double Biseccion::f(double x){
	return(exp(-x)-x);
}

void Biseccion::leerDatos(){
cout << "Ingresa el valor inferior:";
	cin >> inf;
cout << "Ingresa el valor superior:";
	cin >> sup;
cout << "Introduce el numero de aproximaciones:";
	cin >> ciclos;
cout << "Error permitido:";
	cin >> error;
}

void Biseccion::Metodo(){
	if( f(inf) * f(sup) > 0){
		cout << "No se asegura que haya una raiz" << endl;
	exit(1);
	}
	else
		for(int i = 0; i <= ciclos; i++){
			mitad = ((inf * f(sup)) - (sup * f(inf)) / (f(sup) - f(inf)));
			if( f(inf) * f(mitad) < 0)
				sup = mitad;
			else
				inf = mitad;
			if( f(mitad) == 0){
				cout << "raiz exacta:" << mitad << endl;
				getchar();
				exit(1);
			}
			if(sup - inf < error){
				cout << "Raiz aproximada =" << mitad << endl;
				getchar();
				exit(1);
			}
		}
	cout << "hasta " << ciclos << " iteraciones no hay solucion..";
	getchar();
}

main()
{
	Biseccion A;
	A.leerDatos();
	A.Metodo();
}
