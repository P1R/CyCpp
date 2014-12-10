#include <iostream>
//#include <conio.h>

using namespace std; //espacios de std:: asignados globalmente

//declaracion de funciones
float Circulo(float, float);
int Cuadrado(int, int);
int Triangulo(int, int);
int Rectangulo(int, int);

//definición de funciones

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






main()
{
	int a, b, r;
	int pi = 3.141592654;
	
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