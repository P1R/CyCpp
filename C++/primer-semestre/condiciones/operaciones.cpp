#include <iostream>
//#include <conio.h>
//declaracion de las funciones de Operaciones
int Suma(int, int);
int Resta(int, int);
int Multi(int, int);
float Divi(float, float);

using namespace std;

//Definicion de las F-de-Operaciones

int Suma(int dig1, int dig2) //funcion de suma
{
    int  res;
	
		res = dig1 + dig2;
		return res;
}

int Resta(int dig1, int dig2) //funcion de resta
{
    int res;
	
	    res = dig1 - dig2;
	return res;
	
}

int Multi(int dig1, int dig2) //funcion de multiplicacion
{
    int  res;
		res = dig1 * dig2;
		return res;
}
float Divi(float dig1, float dig2) //funcion de division
{
    float res;
	
		res = dig1 / dig2;
	return res;
}

main()  //estapa de llamada
{	

	int dig1, dig2, OP;
	
		cout << "Seleccione una de las siguiente opciones, ingresando su numero correspondiente:"  << '\n';	
		cout << "1 Para Suma" << '\t' << '\t' << "2 Para Resta" << '\n' << "3 Para Multiplicacion" << '\t' << "4 Para Division" << '\n';
		cout << "opcion: ";
			cin >> OP;
		
		if (OP == 1){
			cout << "Esta operacion es suma" << '\n' << '\a' << "Ingresa un numero: ";
				cin >> dig1;
			cout << "Ingresa otro numero: ";
				cin >> dig2;
			cout << "la suma de " << dig1 << " mas " << dig2 << " es igual a " << Suma(dig1, dig2) << '\n';
		}
		
		else if (OP == 2){
			cout << '\n' << "Esta operacion es una resta" << '\n' << "Ingresa un numero: ";
				cin >> dig1;
			cout << "Ingresa otro numero: ";
				cin >> dig2;
			cout << "la resta de " << dig1 << " menos " << dig2 << " es igual a " << Resta(dig1, dig2) << '\n';
		}
		
		else if (OP == 3){
			cout << '\n' << "Esta operacion es una multiplicacion" << '\n' << "Ingresa un numero: ";
				cin >> dig1;
			cout << "Ingresa otro numero: ";
				cin >> dig2;
			cout << "la multiplicacion de " << dig1 << " por " << dig2 << " es igual a " << Multi(dig1, dig2) << '\n';
		}
		
		else if (OP == 4){
			cout << '\n' << "Esta operacion es una division" << '\n' << "Ingresa un numero: ";
				cin >> dig1;
			cout << "Ingresa otro numero: ";
				cin >> dig2;
			cout << "la division de " << dig1 << " entre " << dig2 << " es igual a " << Divi(dig1, dig2) << '\n';
		}
		
		else
			EOF;
		
}