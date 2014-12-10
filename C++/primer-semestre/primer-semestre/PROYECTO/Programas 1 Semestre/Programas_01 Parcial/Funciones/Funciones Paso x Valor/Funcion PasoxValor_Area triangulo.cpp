#include <iostream.h>
#include <conio.h>

//Declaracion de la funcion
float Area_Triangulo (float,float);
//Definicion de la funcion
float Area_Triangulo (float base,float altura)
{
	float resultado;
	resultado= base*altura/2;
	return resultado;
}
//Llamar a la funcion
main ()
{
	cout<<"Area del Triangulo"<<endl;
	float base,altura;
	cout<<"Dar base"<<endl;
	cin>> base;
	cout<<"Dar altura"<<endl;
	cin>> altura;
	cout<<"El resultado es "<<Area_Triangulo (base,altura);
	getch ();
}