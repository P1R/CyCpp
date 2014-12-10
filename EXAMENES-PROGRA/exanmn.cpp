#include <iostream>
//#include <conio.h>
#include <cmath>
using namespace std;

main()
{
	int a[5],x[6],b=2,c,d=0,e,f,i,j,z;                   //declaracion de variable
   cout<<"Dame los valores del vector A: "<<endl;       //pido vector A

   for(i=1;i<=5;i++)
   {
   cin>>a[i];                                           //para q me de impar divide entre 2 y si el residuo es 1 es impar
   c=a[i]%2;

      if(c==1)                                          //si es igual a 1
      {
      d=d+a[i];                                         //suma acumulada de vectores
      }
   }

   cout<<"Dame los valores del vector B: "<<endl;
   for(j=1;j<=6;j++)
   {
   cin>>x[j];
   e=x[j]%2;

   	if(e==0)
      {
      f=f+x[j];
      }
   }

   cout<<"\n"<<"La suma de impares A: "<<d;
   cout<<"\n"<<"La suma de pares B: "<<f;
   z=d+f;
   cout<<"\n\n"<<d<<" + "<<f<<" = "<<z;
   //getch();
}

//nomas cambia las variables y ya
