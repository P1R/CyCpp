/*******************************************************
Escuela Superior de Ingeniería Mecánica y Eléctrica
Alumnos:
    Perez-negrón Rocha David Eugenio
    Osmar trujillo huazo
Profesor:
    Cortés Pérez Alejandro
Programa de interpolacion
*************************************************/
#include<cstdlib>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

class interpolacion
	{
private:
	float x,x0,x1,r,d,fx0,fx1,fx;
public:
	void leer();
  	void calcular();
   };
void interpolacion::leer()
	{
   cout<<"\nValor de x al cual se quiere aproximar:\t";
   cin>>x;
   cout<<"\nIngresa los valores de x0:\t";
   cin>>x0;
   cout<<"\nIngresa el valor de x1:\t";
   cin>>x1;
   }
void interpolacion::calcular()
	{
   cout<<"\nLa funcion evaluada en f(Xo)es:\t";
	fx0=log(x0);
   cout<<fx0;
   cout<<"\nLa funcion evaluada en x1:\t";
   	fx1=log(x1);
   cout<<fx1;
   cout<<"\nEl valor de f(x)es:\t";
   	r=fx1-fx0;
   	d=r/(x1-x0);
   	fx=fx0+(d*(x-x0));

   cout<<fx<<'\n';
   }
int main()
	{
   interpolacion obj;
   obj.leer();
   obj.calcular();
   getchar();
   }
