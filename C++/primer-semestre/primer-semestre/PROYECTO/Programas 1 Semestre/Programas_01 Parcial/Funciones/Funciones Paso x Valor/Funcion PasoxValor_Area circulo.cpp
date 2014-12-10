#include <iostream.h>
#include <conio.h>
#define PI 3.1416

//Declaracion de la funcion
float Area_Circulo (float);
//Definicion de la funcion
float Area_Circulo (float radio)
{
	float area;
	area=radio*radio*PI;
	return area;
}
//Llamar a la funcion
main ()
{
	cout<<"Area del Circulo"<<endl;
	float radio;
	cout<<"Dar radio"<<endl;
	cin>> radio;
	cout<<"El area es "<<Area_Circulo (radio);
	getch ();
}
