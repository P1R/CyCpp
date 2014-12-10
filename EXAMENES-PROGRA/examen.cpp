#include <iostream.h>
#include <conio.h>
main()
{
int cuantos, i, vector [5];
cout<<"cuantos vectores"<<endl;
cin>>cuantos;

for( i=1; i<=cuantos; i++)
	{
   cout<<"dame los valores"<<endl;
   cin>>vector[i];
   }
cout<<"los valores del vector son"<<endl;

   for(i=1; i<=cuantos; i++)
	{
   cout<<vector[i];
   }
  i=0
 cout<<"intercambio"<<endl;
   for( i=cuantos; i>0; i--)
     {
     cout<<vector[i];
     }
 getch();
 }
