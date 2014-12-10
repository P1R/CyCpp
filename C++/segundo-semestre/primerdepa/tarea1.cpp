#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct alumno{
    char nombre[20], matricula[10], grupo[5];        
 

	void leer()
	{
			cin.ignore();
		cout << "nombre del alumno: ";
			gets(nombre);
		cout << "numero de matricula: ";
			gets(matricula);
		cout << "grupo: ";
			gets(grupo);
	}
	void imprimir()
	{
		cin.ignore(); //importante, pues limpia loas casillas restant
			
			cout << "Alumno: ";
			    puts(nombre);
	               cout << "matricula: ";
			    puts(matricula);
			cout << "grupo: ";
			    puts(grupo);
			cout << "\n";
	}
		
};

main()
{
	alumno *a;
	int n, i;
	
	cout << "Cuantos quiere ingresar?: ";
	cin >> n;
	a = new(alumno[n]);
	
	for(i=0; i < n; ++i){
	    cin.ignore();
	    a[i].leer();
	    }
	
	cout << "datos: ";
	cin.ignore();
	for(i=0; i < n; ++i)
	    (a + i) -> imprimir();
}