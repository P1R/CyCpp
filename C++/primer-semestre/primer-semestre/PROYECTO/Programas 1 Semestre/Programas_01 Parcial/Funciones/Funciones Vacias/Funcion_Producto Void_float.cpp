#include <iostream.h>
#include <conio.h>

//Declaracion de la funcion
void Producto (void);
//Definicion de la funcion
void Producto (void)
{
	float a, b, resultado;
   cout<<"Dar a"<<endl;
	cin>> a;
	cout<<"Dar b"<<endl;
	cin>> b;
	resultado=a*b;
   cout<<"El resultado es "<<resultado;
}
//Llamar a la funcion
main ()
{
	Producto ();
	getch ();
}