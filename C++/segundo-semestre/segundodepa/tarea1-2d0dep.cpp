#include <stdio.h>
#include <iostream>
#include <string.h>
#include <ctype.h>
//#include <conio.h>

using namespace std;

class matrix{
    int MAT[3][3], i, j;

    public:
    matrix();
    void read();
    void print();
    friend matrix Plus(matrix&,matrix&);
    friend matrix Less(matrix&, matrix&);
    friend matrix Times(matrix&, matrix&);
};

matrix plus(matrix&,matrix&);
char minusculas(char);/*creamos una funcion similar tolower
por que no e investigado en standar como implementarla*/

matrix::matrix(){
    for(i = 0; i < 3; ++i){
	for(j = 0; j < 3; ++j)
	    MAT[i][j] = 0;
    }
}

void matrix::print(){

    cout << "matriz:\n";

    for(i = 0; i < 3; ++i){
	cout << "\t\t\t" << "|";
	for(j = 0; j < 3; ++j)
	    cout << " " << MAT[i][j] << " ";
	cout << "|" << '\n';
    }
    cout << '\n';
}

void matrix::read(){

    cout << "ingresa valores para la matriz:\n";

    for(i = 0; i < 3; ++i){
	for(j = 0; j < 3; ++j){
	    cout << "ingresa [" << (i+1) << "," << (j+1) << "]:";
		cin >> MAT[i][j];
	}
    }
}

matrix Plus(matrix& x, matrix& y){
    matrix r;
    int i, j;

    for(i = 0; i < 3; ++i){
	for(j = 0; j < 3; ++j)
	r.MAT[i][j] = x.MAT[i][j] + y.MAT[i][j];
    }
    return r;
}

matrix Less(matrix& x, matrix& y){
    matrix r;
    int i, j;

    for(i = 0; i < 3; ++i){
	for(j = 0; j < 3; ++j)
	r.MAT[i][j] = x.MAT[i][j] - y.MAT[i][j];
    }
    return r;

}

matrix Times(matrix& x, matrix& y){
    matrix r;
    int i, j;

    for(i = 0; i < 3; ++i){
	for(j = 0; j < 3; ++j)
	r.MAT[i][j] = x.MAT[i][j] * y.MAT[i][j];
    }
    return r;
}

char minusculas(char x){
    if(x == 'S' || x == 'N')
	x += 32;
    return x;
}

main()
{
    matrix X, Y, R;
    int opc = 0;
    char salir;

    do{
	do{
	cout << "\t\t\t PROGRAMA PARA HACER OPERACIONES CON MATRICES\n";
	cout << "\n\tselecciona una\n";
	cout << "1 para sumar\n" << "2 para restar\n" << "3 para multiplicar\n";
	cout << "opcion:";
	    cin >> opc;

    switch(opc){
	case 1:
	    cout << "\tUsted selecciono sumar:\n";
	    cout << "primer matriz:\n";
		X.read();
	    cout << "segunda matriz:\n";
		Y.read();
			R = Plus(X,Y);
	    cout << "la suma es: ";
		R.print();
	break;
	case 2:
	    cout << "\tUsted selecciono restar\n";
	    cout << "primer matriz:\n";
		X.read();
	    cout << "segunda matriz:\n";
		Y.read();
			R = Less(X,Y);
	    cout << "la resta es: ";
		R.print();
	break;
	case 3:
	    cout << "\tUsted selecciono multiplicar\n";
	    cout << "primer matriz:\n";
		X.read();
	    cout << "segunda matriz:\n";
		Y.read();
			R = Times(X,Y);
	    cout << "el producto es: ";
		R.print();
	break;
	default:
	    cout << "Error!! opcion no permitida\n";
	}
    }
    while(opc != 1 && opc != 2 && opc != 3);
    do{
	cout << "Desea salir? S/n:";
	    cin >> salir;
	    salir = minusculas(salir);
    }
    while(salir != 's' && salir != 'n');

    }
    while(salir == 'n');
}
