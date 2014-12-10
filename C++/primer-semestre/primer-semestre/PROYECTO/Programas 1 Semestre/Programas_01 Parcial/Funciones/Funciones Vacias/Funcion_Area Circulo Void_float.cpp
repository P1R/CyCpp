#include <iostream.h>
#include <conio.h>
#define  PI  3.1416

//Declaracion de la funcion
void Area_Circulo (void);
//Definicion de la funcion
void Area_Circulo (void)
{
	float radio, area;
   cout<<"Dar radio "<<endl;
	cin>> radio;
	area=PI*radio*radio;
   cout<<"El resultado es "<<area;
}
//Llamar a la funcion
main ()
{
	Area_Circulo();
	getch();
}