/* sobre carda de operadores con funciones amigas
- Es posible sobrecargar los operadores con funciones miebro de la clase 
o bien con funciones amigas de la clase,
ahora veremos  este segundo caso.

Recordemos la condicion que debe cumplor para que una funcion sea amiga:
"debe recibir como parametro minimo un objeto de la clase que le da la amistad"

en el caso de operadores unitarios recibira un objeto, pero en el caso de los
binarios recibira dos objetos.

ejemplo:
sobnrecargar el operador + y -
como función amiga de la clase matriz, la cual contiene una matriz con numeros
flotantes de 4x4
*/

#include <iostream>

using namespace std;

class matriz{
    float A[4][4];
    
    public:
	matriz();
	void lectura();
	void impresion();
	friend matriz operator+(matriz&,matriz&);
	friend matriz operator-(matriz&,matriz&);
};

matriz::matriz(){
    int i, j;
	for(i=0; i < 4; ++i){
	    for(j=0; j < 4; ++j)
		A[i][j] = 0;
	}
}

void matriz::lectura(){
    int i, j;
	for(i = 0; i < 4; ++i){
	    for(j = 0; j < 4; ++j){
		cout << "ingresa [" << (i+1) << ","<< (j+1) << "]";
		cin >> A[i][j];
	    }
	}
}

void matriz::impresion(){
    int i, j;
    cout << "\n-----------------------------------\n";
    for(i = 0; i < 4; ++i){
	for(j = 0; j < 4; ++j)
	    cout << A[i][j] <<  " ";
	cout << '\n';
	}
}

matriz operator+(matriz& x, matriz& y){
    int i, j;
    matriz R;
    for(i = 0; i < 4; ++i){
	for(j = 0; j< 4; ++j)
	R.A[i][j] = x.A[i][j] + y.A[i][j];
    }
    return R;
}

matriz operator-(matriz& x, matriz& y){
    int i, j;
    matriz R;
    for(i = 0; i < 4; ++i){
	for(j = 0; j< 4; ++j)
	R.A[i][j] = x.A[i][j] - y.A[i][j];
    }
    return R;
}

main(){
    
    matriz A, B, C, D;
    
    cout << "ingresa la matriz 1";
	A.lectura();
    cout << "ingresa la matriz 2";
	B.lectura();

    C = A + B;
    D = A - B;
    
    cout << "la suma es:";
	C.impresion();
    cout << "la resta es:";
	D.impresion();
}