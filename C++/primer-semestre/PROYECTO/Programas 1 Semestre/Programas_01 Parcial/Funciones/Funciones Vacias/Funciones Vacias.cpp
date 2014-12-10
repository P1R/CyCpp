#include <iostream.h>
#include <conio.h>
#define  PI  3.1416

//Declaracion de las funciones

void Suma(void);
void Resta(void);
void Producto(void);
void Division(void);
void Area_Circulo (void);
void Area_Cuadrado (void);
void Area_Rectangulo (void);
void Area_Triangulo (void);

//Definicion de las funciones

void Suma(void)
{
	cout<<"Operacion Suma:"<<endl;
   cout<<" "<<endl;
	float num_uno, num_dos, resultado;
   cout<<"Dar num_uno"<<endl;
	cin>> num_uno;
	cout<<"Dar num_dos"<<endl;
	cin>> num_dos;
	resultado=num_uno+num_dos;
   cout<<"La Suma es "<<resultado<<endl;
   cout<<" "<<endl;
}

void Resta(void)
{
   cout<<"Operacion Resta:"<<endl;
   cout<<" "<<endl;
   float num_uno, num_dos, resultado;
   cout<<"Dar num_uno"<<endl;
	cin>> num_uno;
	cout<<"Dar num_dos"<<endl;
	cin>> num_dos;
	resultado=num_uno-num_dos;
   cout<<"El resultado es "<<resultado<<endl;
   cout<<" "<<endl;
}

void Producto(void)
{
	cout<<"Operacion Multiplicacion:"<<endl;
   cout<<" "<<endl;
	float num_uno, num_dos, resultado;
   cout<<"Dar num_uno"<<endl;
	cin>> num_uno;
	cout<<"Dar num_dos"<<endl;
	cin>> num_dos;
	resultado=num_uno*num_dos;
   cout<<"La Multiplicacion es "<<resultado<<endl;
   cout<<" "<<endl;
}

void Division(void)
{
	cout<<"Operacion Cociente:"<<endl;
   cout<<" "<<endl;
	float num_uno, num_dos, resultado;
   cout<<"Dar num_uno"<<endl;
	cin>> num_uno;
	cout<<"Dar num_dos"<<endl;
	cin>> num_dos;
	resultado=num_uno/num_dos;
   cout<<"La Division es "<<resultado<<endl;
   cout<<" "<<endl;
}

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

//Llamar a las funciones

main ()
{
	Suma();
   Resta();
   Producto();
   Division();
   Area_Circulo();
   Area_Cuadrado();
   Area_Rectangulo();
   Area_Triangulo();
	getch();
}