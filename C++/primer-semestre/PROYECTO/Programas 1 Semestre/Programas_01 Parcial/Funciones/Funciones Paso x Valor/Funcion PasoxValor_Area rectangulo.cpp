#include <iostream.h>
#include <conio.h>

//Declaracion de la funcion
float Area_Rectangulo (float,float);
//Definicion de la funcion
float Area_Rectangulo (float base,float altura)
{
	float resultado;
	resultado= base*altura;
	return resultado;
}
//Llamar a la funcion
main ()
{
	cout<<"Area del Rectangulo"<<endl;
	float base,altura;
	cout<<"Dar base"<<endl;
	cin>> base;
	cout<<"Dar altura"<<endl;
	cin>> altura;
	cout<<"El resultado es "<<Area_Rectangulo (base,altura);
	getch ();
}