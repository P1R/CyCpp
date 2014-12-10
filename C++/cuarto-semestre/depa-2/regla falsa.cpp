/*******************************************************
Escuela Superior de Ingeniería Mecánica y Eléctrica
Alumnos:
    Perez-negrón Rocha David Eugenio
    Osmar trujillo huazo
Profesor:
    Cortés Pérez Alejandro
Programa de metodo de la regla falsa
*************************************************/
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
class Reg_fal
{
	double inf, sup, aprox, error;
   int ciclos;

   public:
				Reg_fal();

      		void Datos();
      		void Metodo();
      		double fun(double x)
            {
        			 return((exp(-x))-x);
                //return (pow(x,3)-pow(x,2)-1);
         	}
};

Reg_fal::Reg_fal()
{
	inf=sup=aprox=error=0.0;
   ciclos=0;
}

void Reg_fal::Datos()
{
  	cout<<"Dame el limite inferior:\t";
  	cin>>inf;
  	cout<<"Dame el limite superior:\t";
  	cin>>sup;
   cout<<"Dame el numero de ciclos:\t";
 	cin>>ciclos;
  	cout<<"Error permitido:\t";
  	cin>>error;
}

void Reg_fal::Metodo()
{
	if(fun(inf)*fun(sup)>0)
   {
   	cout<<"No se asegura que haya raiz";
      getchar();
      exit(1);
   }

		for(int i=1; i<=ciclos; i++)
   	{
   		aprox=(inf*fun(sup)-sup*fun(inf))/(fun(sup)-fun(inf));
      	if((fun(inf)*fun(aprox))<0)

         	sup=aprox;

         else

      		inf=aprox;

      	if(fun(aprox)==0)
      	{
      		cout<<"La raiz es exacta"<<aprox;
      		getchar();
      		exit(1);
      	}

      		if((sup-aprox)>error)
            {
             cout<<"hay "<<ciclos<<" iteraciones no hay solucion"<<aprox;
   	getchar();

      		}

      }

      cout<<"La raiz aprox:\t"<<aprox;
         		getchar();
         		exit(1);

}

int main()
{
  	Reg_fal a;

  	a.
Datos();
  	a.Metodo();

  	getchar();
}
