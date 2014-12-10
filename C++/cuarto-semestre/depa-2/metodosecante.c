/*******************************************************
Escuela Superior de Ingeniería Mecánica y Eléctrica
Alumnos:
    Perez-negrón Rocha David Eugenio
    Osmar trujillo huazo
Profesor:
    Cortés Pérez Alejandro
Programa de metodo de secante
*************************************************/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

class NR{
	double X0, X1, error;
	int i, ciclos;
public:
	NR();
	void LeeDatos(void);
	void CalculaRaiz(void);
	double f(double x){
		return(pow(x,3)-10);
	}
	double g(double x){
		return(3*pow(x,2));
	}
};
NR::NR(){
	X0 = X1 = error = 0.0;
	i = ciclos = 0;
}

void NR::LeeDatos(void){
	cout << "Ingresa el valor X0:";
		cin >> X0;
	cout << "Ingresa el error:";
		cin >> error;
	cout << "Ingresa el numero de ciclos:";
		cin >>  ciclos;

}

void NR::CalculaRaiz(void){
	for(i = 1; i <= ciclos; ++i){
		X1 = X0 - (f(X0)/g(X0));
		if(abs(X1-X0) <= error){
			cout << "Raiz aproximada:" << X1 << endl;
			getchar();
			exit(1);
		}
		else if(abs(X1-X0)>= 1e4){
			cout << "No hay convergencia"<< endl;
			getchar();
			exit(1);
		}
		else
			X0 = X1;
	}
	cout << "Hasta " << ciclos << " iteraciones no hay solucion" << endl;
	getchar();
	exit(1);
}

main()
{
	NR A;

	A.LeeDatos();
	A.CalculaRaiz();
}
