#include <iostream>
//#include <conio.h>
//declaracion de las funciones de Operaciones
void Suma(void);
void Resta(void);
void Multi(void);
void Divi(void);
//declaración de las funciones de las Areas
void Circulo(void);
void Cuadrado(void);
void Rectangulo(void);
void Triangulo(void);

using namespace std;

//Definición de las F-de-Operaciones

void Suma(void) //función de suma
{
    int dig1, dig2, res;
    
	cout << "Esta operacion es suma" << '\n' << '\a' << "Ingresa un numero: ";
	    cin >> dig1;
	cout << "Ingresa otro numero: ";
	    cin >> dig2;
	    res = dig1 + dig2;
	cout << "la suma de " << dig1 << " mas " << dig2 << " es igual a " << res << '\n';
}

void Resta(void) //función de resta
{
    int dig1, dig2, res;

        cout << '\n' << "Esta operacion es una resta" << '\n' << "Ingresa un numero: ";
	    cin >> dig1;
        cout << "Ingresa otro numero: ";
	    cin >> dig2;
	    res = dig1 - dig2;
        cout << "la resta de " << dig1 << " menos " << dig2 << " es igual a " << res << '\n';
}

void Multi(void) //función de multiplicación
{
    int dig1, dig2, res;
    
	cout << '\n' << "Esta operacion es una multiplicacion" << '\n' << "Ingresa un numero: ";
		cin >> dig1;
	cout << "Ingresa otro numero: ";
		cin >> dig2;
		res = dig1 * dig2;
	cout << "la multiplicacion de " << dig1 << " por " << dig2 << " es igual a " << res << '\n';
}
void Divi(void) //funcion de división
{
    float dig1, dig2, res;
    
	cout << '\n' << "Esta operacion es una division" << '\n' << "Ingresa un numero: ";
		cin >> dig1;
	cout << "Ingresa otro numero: ";
		cin >> dig2;
		res = dig1 / dig2;
	cout << "la division de " << dig1 << " entre " << dig2 << " es igual a " << res << '\n';
}

//Definición de las F-de-Areas

void Circulo(void)
{
    int res, r, pi = 3.1416;

	cout  << '\n' << "Esta funcion es para calcular el area del circulo: " << '\n' << "Dame el valor de radio: ";
	    cin >> r;
	    res = pi * (r * r);
	cout << "el area de un circulo de radio " << r << " es igual a: " << res << '\n';
}

void Cuadrado(void)
{
    int res, l1, l2;
	
	cout << '\n' << "Esta funcion es para calcular el area del cuadrado: " << '\n';
        cout << "Dame el valor de el lado 1: ";
            cin >> l1;
        cout << "Dame el valor de el lado 2: ";
            cin >> l2;
            res = l1 * l2;
        cout << "el area en un Cuadrado con un lado de " << l1 << " y otro lado de " << l2 << " es igual a: " << res << '\n';
}

void Rectangulo(void)
{
    int res, b, h;

	cout << '\n' << "Esta funcion es para calcular el area del rectangulo: " << '\n';
        cout << "Dame el valor de la base: ";
            cin >> b;
        cout << "Dame el valor de la altura:";
            cin >> h;
            res = b * h;
        cout << "el area en un rectangulo con base " << b << " y con altura " << h << " es igual a: " << res << '\n';
}

void Triangulo(void)
{
    int res, b, h;

	cout << '\n' << "Esta funcion es para calcular el area del triangulo: " << '\n';
        cout << "Dame el valor de la base: ";
            cin >> b;
        cout << "Dame el valor de la altura:";
            cin >> h;
            res = (b * h) / 2;
        cout << "el area en un triangulo con base " << b << " y con altura " << h << " es igual a: " << res << '\n';
}


main()  //estapa de llamada
{	
	//llamada de F-operación
	
	Suma();
	Resta();
	Multi();
	Divi();
	//llamada de F-areas
	
	cout  << '\n' << "ahora las funciones  para medir areas: " << '\n' ; 
	
	Circulo();
	Cuadrado();
	Triangulo();
	Rectangulo();
	//getch();
}
