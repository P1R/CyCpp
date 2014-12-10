/*******************************************************
Escuela Superior de Ingeniería Mecánica y Eléctrica
Alumnos:
    Perez-negrón Rocha David Eugenio
    Osmar trujillo huazo
Profesor:
    Cortés Pérez Alejandro
Programa de interpolacion de lagrange
*************************************************/
#include<cstdio>
#include<iostream>
#include<cstdlib>

using namespace std;

#define t 20

class intlag
	{
private:
	int n,num;
   float x;
   float xl[t], fxl[t],xv;
public:
	void entra(void);
   void tab(void);
   void lag(void);
   };
void intlag::entra(void)
	{
   n=num=0;
   cout<<"polinomios de lagrange"<<endl;
   while(n>=num)
   	{
      cout<<"numeo de elementos de la tabla:\t"<<endl;
      cin>>num;
      cout<<"grado del polinomio de aproximacion:\t"<<endl;
      cin>>n;
      if(n>=num)
      cout<<"grado del polinomio debe ser menor que elementos"<<endl;
      }
   cout<<"Punto cuya funcion desea buscar"<<endl;
   cin>>xv;
   }
void intlag::tab(void)
	{
   for(int i=0;i<num;i++)
   	{
      cout<<"valor de x"<<i<<endl;
      cin>>xl[i];
      cout<<"valor de fx"<<i<<endl;
      cin>>fxl[i];
      }
   }
void intlag::lag(void)
	{
   float fxp=0.0,temp;
   int i,j;
   for(j=0;j<=n;j++)
   	{
      temp=1.0;
      for(i=0;i<=n;i++)
      	{
         if(i!=j)
         temp*=(( xv-xl[i])/(xl[j]-xl[i]));
         }
      fxp+=temp*fxl[j];
      }
      cout<<"valor calculado para"<<xv<<"ej="<<fxp<<endl;
   }

int main()
{
   intlag a;
   a.entra();
   a.tab();
   a.lag();
   getchar();
return(0);
}

