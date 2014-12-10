#include <iostream.h>
#include <conio.h>
#define  PI  3.1416

//Declaracion de la funcion
void Area_Circulo (void);
void Area_Cuadrado (void);
void Area_Rectangulo (void);
void Area_Triangulo (void);

//Definicion de la funcion
void Area_Circulo (void)
{
   cout<<"Area del Circulo"<<endl;
	float radio, area;
   cout<<"Dar radio "<<endl;
	cin>> radio;
	area=PI*radio*radio;
   cout<<"El resultado es "<<area<<endl;
   cout<<" "<<endl;
}

void Area_Cuadrado (void)
{
   cout<<"Area del Cuadrado"<<endl;
	float lado, area;
   cout<<"Dar lado "<<endl;
	cin>> lado;
	area=lado*lado;
   cout<<"El resultado es "<<area<<endl;
   cout<<" "<<endl;
}

void Area_Rectangulo (void)
{
	cout<<"Area del Retangulo"<<endl;
	float base, altura, area;
   cout<<"Dar base "<<endl;
	cin>> base;
   cout<<"Dar altura "<<endl;
	cin>> altura;
	area=base*altura;
   cout<<"El resultado es "<<area<<endl;
   cout<<" "<<endl;
}

void Area_Triangulo (void)
{
   cout<<"Area del Triangulo"<<endl;
	float base, altura, area;
   cout<<"Dar base "<<endl;
	cin>> base;
   cout<<"Dar altura "<<endl;
	cin>> altura;
	area=base*altura/2;
   cout<<"El resultado es "<<area<<endl;
   cout<<" "<<endl;
}

//Llamar a la funcion
main ()
{
	Area_Circulo();
   Area_Cuadrado();
   Area_Rectangulo();
   Area_Triangulo();

	getch();
}