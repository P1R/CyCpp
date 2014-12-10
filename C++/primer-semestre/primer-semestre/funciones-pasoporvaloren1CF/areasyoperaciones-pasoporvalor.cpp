#include <iostream>
//#include <conio.h>

using namespace std; //espacios de std:: asignados globalmente

//declaracion de las funciones de Operaciones
int Suma(int, int);
int Resta(int, int);
int Multi(int, int);
float Divi(float, float);

//declaracion de funciones de areas
float Circulo(float, float);
int Cuadrado(int, int);
int Triangulo(int, int);
int Rectangulo(int, int);

//Definición de las F-de-Operaciones

int Suma(int dig1, int dig2) //función de suma
{
    int  res;
	
		res = dig1 + dig2;
		return res;
}

int Resta(int dig1, int dig2) //función de resta
{
    int res;
	
	    res = dig1 - dig2;
	return res;
	
}

int Multi(int dig1, int dig2) //función de multiplicación
{
    int  res;
		res = dig1 * dig2;
		return res;
}
float Divi(float dig1, float dig2) //funcion de división
{
    float res;
	
		res = dig1 / dig2;
	return res;
}


//Definición de las F-de-Areas

int Circulo(int pi, int r)
{
    int res;
        res = pi * (r * r);
    return res;
}

int Cuadrado(int l1, int l2)
{
    int res;
        res = l1 * l2;
    return res;
}

int Triangulo(int b, int h)
{
    int res;
        res = (b * h) / 2;
    return res;
}

int Rectangulo(int b, int h)
{
    int res;
        res = b * h;
    return res;
}



main()  //estapa de llamada
{	
	//seccion de operaciones
	int dig1, dig2;
	int a, b, r;
	int pi = 3.141592654;
	
		cout << "calcularemos las operaciones basicas: " << '\n';
	
		cout << "Esta operacion es suma" << '\n' << '\a' << "Ingresa un numero: ";
			cin >> dig1;
		cout << "Ingresa otro numero: ";
			cin >> dig2;
		cout << "la suma de " << dig1 << " mas " << dig2 << " es igual a " << Suma(dig1, dig2) << '\n';
	
		cout << '\n' << "Esta operacion es una resta" << '\n' << "Ingresa un numero: ";
			cin >> dig1;
		cout << "Ingresa otro numero: ";
			cin >> dig2;
		cout << "la resta de " << dig1 << " menos " << dig2 << " es igual a " << Resta(dig1, dig2) << '\n';
	
		cout << '\n' << "Esta operacion es una multiplicacion" << '\n' << "Ingresa un numero: ";
			cin >> dig1;
		cout << "Ingresa otro numero: ";
			cin >> dig2;
		cout << "la multiplicacion de " << dig1 << " por " << dig2 << " es igual a " << Multi(dig1, dig2) << '\n';
	
		cout << '\n' << "Esta operacion es una division" << '\n' << "Ingresa un numero: ";
			cin >> dig1;
		cout << "Ingresa otro numero: ";
			cin >> dig2;
			cout << "la division de " << dig1 << " entre " << dig2 << " es igual a " << Divi(dig1, dig2) << '\n';
	
	//seccion de areas
	
		cout << '\n' << '\n' << "ahora calcularemos las areas de multiples figuras geometricas: " << '\n';
	
		cout << "Esta es la funcion para calcular el  area del Circulo: " << '\n';
		cout << "Dame el valor de radio: ";
			cin >> r;
		cout << "el area de un circulo de radio " << r << " es igual a: " << Circulo(pi, r) << endl;
	
		cout << '\n' << "Esta es la funcion para calcular el  area del Cuadrado: " << '\n';
		cout << "Dame el valor de el lado 1: ";
			cin >> a;
		cout << "Dame el valor de el lado 2: ";
			cin >> b;
		cout << "el area en un triangulo con un lado de " << a << " y otro lado de " << b << " es igual a: " << Cuadrado(a, b) << endl;
	
		cout << '\n' << "Esta es la funcion para calcular el  area del Triangulo: " << '\n';
		cout << "Dame el valor de la base: ";
			cin >> a;
		cout << "Dame el valor de la altura:";
			cin >> b;
		cout << "el area en un triangulo con base " << a << " y con altura " << b << " es igual a: " << Triangulo(a, b) << endl;

		cout << '\n' << "Esta es la funcion para calcular el  area del Rectangulo: " << '\n';
		cout << "Dame el valor de la base: ";
			cin >> a;
		cout << "Dame el valor de la altura:";
			cin >> b;
		cout << "el area en un rectangulo con base " << a << " y con altura " << b << " es igual a: " << Rectangulo(a, b) << '\n';

}

