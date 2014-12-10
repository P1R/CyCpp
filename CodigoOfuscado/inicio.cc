#include <string>
#include <iostream>
#include "acaprof.h"
#include "nivel-socio.h"
#include "conprog.h"
#include "companyinfo.h"
#include <cstdio>
#include <cstdlib>

struct empleado{
    char nombre[50];
    int edad;
    char sexo;
    long int telef;
    char mail[30];
    int aciertos;
    
    friend int acaprof(void);
    friend int nivsoc(void);
    friend int progcon(void); 
    empleado(int, char, long int);
};
empleado::empleado(int a = 0, char b ='-', long int c = 0){
    strcpy(nombre,"");
    edad = a;
    aciertos = a;
    sexo = b;
    telef = c;
    strcpy(mail,"");
}

main(){
    empleado *ap;
    int n, i, j, k = 0;
    system("clear");
    compinf();
    
    cout << "Cuantos empleados presentaran las evaluaciones?:";
	cin >> n;
    
    ap = new(empleado[n]);
    system("clear");
    fflush(stdin);
    for(i = 0; i < n; ++i){
	system("clear");
	cout << "Evaluacion para el Aspirante " << (i+1) << endl;
	cout << "Ingrese su nombre:";
	    cin.ignore();
	    cin.getline(ap[i].nombre,50,'\n');
	cout << "Ingrese su edad:";
	    cin >> ap[i].edad;
	cout << "Ingrese su sexo (M o F):";
	    cin >> ap[i].sexo;
	cout << "Ingrese su telefono:";
	    cin >> ap[i].telef;
	cout << "Ingrese su Mail:";
	    cin.ignore();
	    cin.getline(ap[i].mail,30,'\n');
    	    system("clear");
    	ap[i].aciertos = progcon();
    	    system("clear");
    	ap[i].aciertos += nivsoc();
    	    system("clear");
    	ap[i].aciertos += acaprof();
    	if (k < ap[i].aciertos){
    	    k = ap[i].aciertos;
    	    j = i;
	    }
    }
	system("clear");	
    cout << "El ganador del puesto es:" << ap[j].nombre 
	 << ", conto con " << ap[j].aciertos
	 << " aciertos y sus datos son..." << endl;
    cout << "Edad:" << ap[j].edad << endl;
    cout << "Sexo:"<< ap[j].sexo  << endl;
    cout << "Telefono:"<< ap[j].telef<< endl;
    cout << "Mail:"<< ap[j].mail << endl;
}

