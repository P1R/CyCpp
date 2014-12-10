#include <iostream.h>
#include <conio.h>

//Declaracion de la funcion
float Resta (float,float);
//Definicion de la funcion
float Resta (float a,float b)
{
	float resultado;
	resultado= a-b;
	return resultado;
}
//Llamar a la funcion
main ()
{
	float a,b;
	cout<<"Dar a"<<endl;
	cin>> a;
	cout<<"Dar b"<<endl;
	cin>> b;
	cout<<"El resultado es "<<Resta (a,b);
	getch ();
}