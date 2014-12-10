#include <iostream.h>
#include <conio.h>

//Declaracion de las funciones
float Suma (float,float);
float Resta (float,float);
float Producto (float,float);
float Division (float,float);

//Definicion de las funciones
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
float Producto (float e,float f)
{
	float resultado;
	resultado= e*f;
	return resultado;
}
float Division (float g,float h)
{
	float resultado;
	resultado= g/h;
	return resultado;
}

main()
{

  int opcion;
  float a,b;
  float c,d;
  float e,f;
  float g,h;

  cout<<"Elegir Opcion"<<endl;
  cout<<" "<<endl;
  cout<<"1. Opcion Suma"<<endl;
  cout<<"2. Opcion Resta"<<endl;
  cout<<"3. Opcion Multiplicacion"<<endl;
  cout<<"4. Opcion Division"<<endl;
  cout<<endl;
  cin>>opcion;
  cout<<endl;

  if(opcion==1)
   {
  	cout<<"Operacion Suma"<<endl;
   cout<<"Dar Num_uno"<<endl;
	cin>> a;
	cout<<"Dar Num_dos"<<endl;
	cin>> b;
	cout<<"El resultado es "<<Suma (a,b);
   cout<<" "<<endl;
   }

  if(opcion==2)
  {
   cout<<"Operacion Resta"<<endl;
	cout<<"Dar Num_uno"<<endl;
	cin>> c;
	cout<<"Dar Num_dos"<<endl;
	cin>> d;
	cout<<"El resultado es "<<Resta (c,d);
   cout<<" "<<endl;
   }

  if(opcion==3)
  {
  	cout<<"Operacion Producto"<<endl;
	cout<<"Dar Num_uno"<<endl;
	cin>> e;
	cout<<"Dar Num_dos"<<endl;
	cin>> f;
	cout<<"El resultado es "<<Producto (e,f);
   cout<<" "<<endl;
   }

  if(opcion==4)
  {
   cout<<"Operacion Division"<<endl;
	cout<<"Dar Num_uno"<<endl;
	cin>> g;
	cout<<"Dar Num_dos"<<endl;
	cin>> h;
	cout<<"El resultado es "<<Division (g,h);
   cout<<" "<<endl;
   }

  getch();

}