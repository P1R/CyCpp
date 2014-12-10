#include <iostream.h>
#include <conio.h>

main ()

{

	float modelo, peso;
   char opcion;

   do
{
   cout<<"Determinacion de Clase y Tarifa"<<endl;
   cout<<endl;
   cout<<"Dar Año del Modelo"<<endl;
   cin>>modelo;
   cout<<"Dar peso en libras"<<endl;
   cin>>peso;

   if (modelo <= 1970)
 {
   if (peso < 2700)
   {
   cout<<"Clase 1"<<endl;
   cout<<"Tarifa 16.50"<<endl;
   cout<<endl;
   }

   if (peso >= 2700 && peso <=3800)
   {
   cout<<"Clase 2"<<endl;
   cout<<"Tarifa 25.50"<<endl;
   cout<<endl;
   }

   if (peso > 3800)
   {
   cout<<"Clase 3"<<endl;
   cout<<"Tarifa 46.50"<<endl;
   cout<<endl;
   }

 }

   if (modelo >1970 && modelo <=1979)
 {
   if (peso < 2700)
   {
   cout<<"Clase 4"<<endl;
   cout<<"Tarifa 27.00"<<endl;
   cout<<endl;
   }

   if (peso >= 2700 && peso <=3800)
   {
   cout<<"Clase 5"<<endl;
   cout<<"Tarifa 30.50"<<endl;
   cout<<endl;
   }

   if (peso > 3800)
   {
   cout<<"Clase 6"<<endl;
   cout<<"Tarifa 52.50"<<endl;
   cout<<endl;
   }

 }

   if (modelo >= 1980)
 {
   if (peso < 3500)
   {
   cout<<"Clase 7"<<endl;
   cout<<"Tarifa 19.50"<<endl;
   cout<<endl;
   }

   if (peso >= 3500)
   {
   cout<<"Clase 8"<<endl;
   cout<<"Tarifa 52.50"<<endl;
   cout<<endl;
   }

 }

cout<<"Desea continuar en el menu? S/N"<<endl;
cin>>opcion;

}while (opcion=='s' || opcion=='S');

   getch();
}
