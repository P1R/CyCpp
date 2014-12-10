#include <iostream.h>
#include <conio.h>
#define PI 3.1416

//Declaracion de la funcion
float Suma (float,float);
float Resta (float,float);
float Producto (float,float);
float Division (float,float);
float Area_Circulo (float);
float Area_Cuadrado (float);
float Area_Rectangulo (float,float);
float Area_Triangulo (float,float);

//Definicion de la funcion
float Suma (float a,float b)
{
	float resultado;
	resultado= a+b;
	return resultado;
}

float Resta (float c,float d)
{
	float resultado;
	resultado= c-d;
	return resultado;
}

float Producto (float g,float h)
{
	float resultado;
	resultado= g*h;
	return resultado;
}

float Division (float i,float j)
{
	float resultado;
	resultado= i/j;
	return resultado;
}

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
	float a,b;
   cout<<"Operacion Suma"<<endl;
	cout<<"Dar Num_uno"<<endl;
	cin>> a;
	cout<<"Dar Num_dos"<<endl;
	cin>> b;
	cout<<"El resultado es "<<Suma (a,b)<<endl;
   cout<<" "<<endl;

   float c,d;
   cout<<"Operacion Resta"<<endl;
	cout<<"Dar Num_uno"<<endl;
	cin>> c;
	cout<<"Dar Num_dos"<<endl;
	cin>> d;
	cout<<"El resultado es "<<Resta (c,d)<<endl;
   cout<<" "<<endl;

   float g,h;
   cout<<"Operacion Producto"<<endl;
	cout<<"Dar Num_uno"<<endl;
	cin>> g;
	cout<<"Dar Num_dos"<<endl;
	cin>> h;
	cout<<"El resultado es "<<Producto (g,h)<<endl;
   cout<<" "<<endl;

   float i,j;
   cout<<"Operacion Division"<<endl;
	cout<<"Dar Num_uno"<<endl;
	cin>> i;
	cout<<"Dar Num_dos"<<endl;
	cin>> j;
	cout<<"El resultado es "<<Division (i,j)<<endl;
   cout<<" "<<endl;

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