#include <iostream.h>
#include <conio.h>
#define PI 3.1416

//Declaracion de la funcion
float Area_Circulo (float);
float Area_Cuadrado (float);
float Area_Rectangulo (float,float);
float Area_Triangulo (float,float);

//Definicion de la funcion
float Area_Circulo (float radio)
{
	float area;
	area=radio*radio*PI;
	return area;
}

float Area_Cuadrado (float lado)
{
	float resultado;
	resultado= lado*lado;
	return resultado;
}

float Area_Rectangulo (float base,float altura)
{
	float resultado;
	resultado= base*altura;
	return resultado;
}

float Area_Triangulo (float base_T,float altura_T)
{
	float resultado;
	resultado= base_T*altura_T/2;
	return resultado;
}

//Llamar a la funcion
main ()
{
	cout<<"Area del Circulo"<<endl;
	float radio;
	cout<<"Dar radio"<<endl;
	cin>> radio;
	cout<<"El area es "<<Area_Circulo (radio)<<endl;
   cout<<" "<<endl;

   cout<<"Area del Cuadrado"<<endl;
	float lado;
	cout<<"Dar lado"<<endl;
	cin>> lado;
	cout<<"El resultado es "<<Area_Cuadrado (lado)<<endl;
   cout<<" "<<endl;

   cout<<"Area del Rectangulo"<<endl;
	float base,altura;
	cout<<"Dar base"<<endl;
	cin>> base;
	cout<<"Dar altura"<<endl;
	cin>> altura;
	cout<<"El resultado es "<<Area_Rectangulo (base,altura)<<endl;
   cout<<" "<<endl;

   cout<<"Area del Triangulo"<<endl;
	float base_T,altura_T;
	cout<<"Dar base"<<endl;
	cin>> base_T;
	cout<<"Dar altura"<<endl;
	cin>> altura_T;
	cout<<"El resultado es "<<Area_Triangulo (base_T,altura_T)<<endl;
   cout<<" "<<endl;

   getch ();
}