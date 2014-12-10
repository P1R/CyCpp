#include <iostream.h>
#include <conio.h>

//Declaracion de la funcion
float Area_Cuadrado (float);
//Definicion de la funcion
float Area_Cuadrado (float lado)
{
	float resultado;
	resultado= lado*lado;
	return resultado;
}
//Llamar a la funcion
main ()
{
	cout<<"Area del Cuadrado"<<endl;
	float lado;
	cout<<"Dar lado"<<endl;
	cin>> lado;
	cout<<"El resultado es "<<Area_Cuadrado (lado);
	getch ();
}