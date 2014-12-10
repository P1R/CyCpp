/*
ejemplo
sobrecargar el operador del incremento(++) en notacion prefija y postfija
como funcion amiga de una clase matriz que contiene una matriz de numeros
enteros de tamaño 4x4
*/
#include <iostream>

using namespace std;

class matriz{
    int A[4][4];
    
    public:
	matriz();
	void lectura();
	void impresion();
	friend matriz operator++(matriz &);
	friend matriz operator++(matriz &, int );
};

matriz::matriz(){
    int i, j;
    
    for(i = 0; i < 4; ++i){
	for(j = 0; j < 4; ++j)
	A[i][j] = 0;
    }
}

void matriz::lectura(){
	int i, j;
	
	for(i = 0; i < 4; ++i){
	    for(j = 0; j < 4; ++j){
		cout << "ingresa [" << (i+1) << "," << (j+1) << "]:";
		cin >> A[i][j];
		}
	}
}

void matriz::impresion(){
    int i, j;
	for(i = 0; i < 4; ++i){
	    for(j = 0; j < 4; ++j)
	    cout << A[i][j];
	cout << '\n';
	}
}

matriz operator++(matriz &M){
    int i, j;
    cout << "notacion postfija\n";
    for(i = 0; i < 4; i++){
	for(j = 0; j < 4; ++j)
	    M.A[i][j]++;
    }
    cout << '\n';
    return M;
}

matriz operator++(matriz &M, int x){
    int i, j;
    cout << "notacion prefija\n";
    for(i = 0; i < 4; i++){
	for(j = 0; j < 4; ++j)
	    ++M.A[i][j];
    }
    cout << '\n';
    return M;
}


main(){
    matriz A, B,C;
    
	A.lectura();
	    B = ++A;
		B.impresion();
	    C = A++;
		C.impresion();
	cout << '\n';
	A.impresion();
}