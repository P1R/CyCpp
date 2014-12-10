/* Elabore:
clase base1:
	atributo nombre
	metodos:
		constructor
		funcion virtual leer
		funcion virtual visualizar 

clase derivada1, hija de clase base1:
	atributo: direccion
	Metodos:
		constructor 
		funciones virutal leer
		funcion virtual visualizar
clase derivada2, hija de clase derivada1
    Atributo: telefono
    metodos:
	    funcion virtual leer
	    funcion virtual visualizar
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class base1{
    protected:
    char nombre[20];
    public:
	base1(char *);
    virtual void leer();
    virtual void visualizar();
};

base1::base1(char *N = '\0'){
    strcpy(nombre,N);
}

class derivada1: public base1{
    protected:
	char direccion[20];
    public:
	derivada1(char *, char *);
	virtual void leer();
	virtual void visualizar();
};

derivada1::derivada1(char *N = '\0', char *D = '\0'): base1(N){
    strcpy(direccion, D);
}
    

class derivada2: public derivada1{
	long telefono;
	public:
	derivada2(char *, char *, long);
	virtual void leer();
	virtual void visualizar();
};

derivada2::derivada2(char *N = '\0' , char *D = '\0', long T = 0):derivada1(N,D){
	telefono = T;
}

main(){
    base1 *ap;
    base1 objeto1;
    derivada1 obj1;
    derivada2 obj2;
    ap = &objeto1;
    ap -> leer();
    ap -> visualizar();
    ap = &obj1;
    ap -> leer();
    ap -> visualizar();
    ap = &obj2;
    ap -> leer();
    ap -> visualizar();
}

/*
hacer una clase base y dos derivadas y hacer diferentes atributos, constructores y sus funciones
virtuales
*/

                  