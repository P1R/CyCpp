/* Elabore un progrmaa en C++ que tulice una estructura donde se almacenen de manera dinámica
(memoria dinamica) N mediciones de Voltaje de un dispositivo electrónico. Crear las siguientes
 funciones:

void leerdatos(); lee las N mediciones
Void Imprimirdatos(); imrpime las n mediciones
float promedio(); regresa el promedio de las n mediciones

elabora un programa principal que declare una variable de esta esta estructura, y utilice dichas
funciones */
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct volts{
    float *ap;
    int n;
    void leerdatos(){
	int i;
	cout << "cuantas mediciones son: ";
	cin >> n;
	
	ap = new(float[n]);
	/*if (ap == null){
	    cout << "Memoria insuficiente";
	    exit(1);
	    }      */
	cout << "Da las mediciones\n";
	for(i = 0; i < n; ++i){
	    cout << "medicion" << (i+1) << "= ";
	    cin >> ap[i];
	    }
	}
    float promedio(){
	float prom = 0;
	int i;
	    for (i = 0; i < n; ++i)
	    prom = prom + ap[i];
	prom = prom/n;
	return prom;
	}
    
    void imprimirdatos(void){
	int i;
	for(i = 0; i < n; ++i)
	cout << "el ingreso" << (i+1) << "= " << ap[i] << '\n';
	}
};

main()
{
    volts a;
    a.leerdatos();
    a.imprimirdatos();
    cout << "el promedio es " << a.promedio() << '\n';
}