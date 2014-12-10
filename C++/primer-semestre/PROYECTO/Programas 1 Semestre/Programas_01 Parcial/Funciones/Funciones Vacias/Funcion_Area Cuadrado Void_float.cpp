#include <iostream.h>
#include <conio.h>

//Declaracion de la funcion
void Area_Cuadrado (void);
//Definicion de la funcion
void Area_Cuadrado (void)
{
	float lado, area;
   cout<<"Dar lado "<<endl;
	cin>> lado;
	area=lado*lado;
   cout<<"El resultado es "<<area;
}
//Llamar a la funcion
main ()
{
	Area_Cuadrado();
	getch();
}