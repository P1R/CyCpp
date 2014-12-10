#include <iostream>
#include <stdio.h>
#include <string.h>

class fruta{
  protected:
    char nombre[10];
  public:
    fruta(char *);
    virtual void leer(){
	cout << "ingresa nombre:";
	gets(nombre);
	}
    virtual void imprimir(){
	cout << "el nombre es:";
	puts(nombre);
	cout << '\n';
    }
};
fruta::fruta(char *N = '\0'){
    strcpy(nombre, C);
}

class color{
    protected:
	char color[10];
    public:
	virtual void leer(){
	cout << "ingresa color:";
	    gets(color);
	}
	virtual void imprimir(){
	cout << "el color es:";
	    puts(color);
	cout << '\0';
	}
	color(char *, char *);
};
color::color(char *N = "\0", char *C = "\0"):public fruta(N){
	strcpy(color,C);
}



