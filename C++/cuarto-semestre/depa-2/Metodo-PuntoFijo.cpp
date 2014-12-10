/*******************************************************
Escuela Superior de Ingeniería Mecánica y Eléctrica
Alumnos:
    Perez-negrón Rocha David Eugenio
    Osmar trujillo huazo
Profesor:
    Cortés Pérez Alejandro
Programa de metodo de punto fijo
*************************************************/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

class PF{
	double  X0, Xn, error;
	int i, ciclos;
public:
	PF();
	void LeeDatos(void);
	void CalculaRaiz(void);
	double g(double x){
		return(exp(-x));
	}
};
PF::PF(){
	X0 = Xn = error = 0.0;
	i = ciclos = 0;
}
void PF::LeeDatos(void){
	cout << "Ingresa el X0:";
		cin >> X0;
	cout << "Ingresa el error:";
		cin >> error;
	cout << "Ingresa el numero de ciclos:";
		cin >> ciclos;
}

void PF::CalculaRaiz(void){
	for(i = 1; i <= ciclos; ++i){
		Xn = g(X0);
		if(Xn > 1e4){
			cout << "No hay convergencia" << endl;
			getchar();
			exit(1);
		}
		else if(abs(Xn-X0) <= error){
			cout << "La Raiz aprox:" <<  Xn <<  endl;
			cout << i << endl;
			getchar();
			exit(1);
		}
		else
			X0=Xn;
	}
	cout << "Hasta " << ciclos << " no hay solucion..." << endl;
		getchar();
		exit(1);
}

main()
{
	PF A;

	A.LeeDatos();
	A.CalculaRaiz();
}
