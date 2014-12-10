#include <iostream.h>
#include <conio.h>


//Declaracion de la funcion
float Suma (float,float);
float Resta (float,float);
float Producto (float,float);
float Division (float,float);

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

	getch ();
}