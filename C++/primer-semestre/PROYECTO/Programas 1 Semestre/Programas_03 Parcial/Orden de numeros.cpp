#include <iostream.h>
#include <conio.h>

void main(void)                                //[i]
	{
   int numeros [10];
   int cuantos;
   int i;
   cout<<"Cuantos numeros en tu lista";
   cin>>cuantos;

   for (i=0; i<cuantos; i++)
   cin>>numeros [i];

   i=0;

   while ((i<=cuantos-2)&&(numeros[i]<=numeros[i+1]))
   	{
      i=i+1;
      }

   if (i==cuantos-1)
   	cout<<"La lista esta ordenada";
   else
   	cout<<"La lista no esta ordenada";

   getch();
   }

