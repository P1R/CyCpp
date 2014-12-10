/* se tiene una clase que contiene como atributo una matriz de numeros enteros tamaño 5x5
Elabore:
- Su contructor vacio
- La funcion void leer_datos()
- la funcion void imprimir_datos()
- una funcion amiga que devuelva la suma de todos los elementos de la matriz
*/

//De tal manera que se pueda ejecutar el siguiente codigo
#include <iostream>

class matriz{
    
    int m[5][5], i, j;
    public:
    void leer_datos();
    void imprimir_datos();
    friend int suma(matriz&);
    matriz(){
    for(i = 0; i < 5; ++i){
	for(j = i; j < 5; ++j)
	    m[i][j] = 0;
	}
    }
};

main(){

matriz A;
A.leer_datos();
A.imprimir_datos();

std::cout << "la suma de los elementos de la matriz\n";
std::cout << "que ingresaste es" << suma(A);
}

matriz::leer_datos(){
    int i, j;
    std::cout << "ingresa los valores de la matriz:\n";
    for(i = 0; i < 5; ++i){
	for(j = 0; j < 5; ++j){
	    std::cout << "ingresa [" << (i+1) << "," << (j+1) << "]\n";
	    std::cin >> m[i][j];
	}
    }
}
matriz::imprimir_datos(){
    for(i = 0; i < 5; ++i){
	for(j = i; j < 5; ++j){
	    std::cout << m[i][j] << " ";
	    }
	std::cout << "\n";
	}
}

int suma(matriz& alias){
    int r, i, j;
    for(i = 0; i < 5; ++i){
	for(j = i; j < 5; ++j)
	r +=  m[i][j];
    }
    return r;
}

