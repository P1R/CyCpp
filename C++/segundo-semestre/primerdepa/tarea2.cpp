#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/*Base de datos de alumnos*/

class alumno{

    char nombre[20], matricula[10], grupo[5];
    
    public:
	void leer();
	void imprimir();
	alumno(char, char, char);
	alumno(const alumno&);
	~alumno();
    };

    void alumno::leer(){
	cin.ignore();
	cout << "ingrese nombre del alumno: ";
		gets(nombre);
	cin.ignore();
	cout << "ingrese matricula: ";
		gets(matricula);
	cin.ignore();
	cout << "ingrese grupo: ";
		gets(grupo);
	//cin.ignore();
    }
    
    void alumno::imprimir(){
	cout << "\n\nel nombre del alumno es: ";
		puts(nombre);
	cout << "\nla matricula es: ";
		puts(matricula);
	cout << "\nel grupo es: ";
		puts(grupo);
	cout << "\n";
    }

    alumno::alumno(char a= '\0', char b = '\0', char c = '\0'){
	    nombre[0]  = a; 
	    matricula[0]  = b;
	    grupo[0] = c;
    } 
    
    alumno::alumno(const alumno &X){
	    
	strcpy(nombre, X.nombre);
	strcpy(matricula, X.matricula);
	strcpy(grupo, X.grupo);
	    
    }
    
	alumno::~alumno(){
		cout<<"\ndestructor activado ;)\n";	
	}
    
    
main()
{
	alumno D;
		
		D.imprimir();
		D.leer();
		alumno  d = D;
			d.imprimir();
}
