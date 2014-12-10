#include <iostream.h>
#include <conio.h>

//Declaracion de las funciones

void Suma(void);
void Resta(void);
void Producto(void);
void Division(void);

//Definicion de la funcion

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

//Llamar a la funcion

main ()
{
	Suma();
   Resta();
   Producto();
   Division();
	getch();
}