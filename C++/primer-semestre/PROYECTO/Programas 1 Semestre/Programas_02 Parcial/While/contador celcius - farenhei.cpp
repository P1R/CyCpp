#include <iostream.h>
#include <conio.h>

main ()
{
	int Celcius=5, farenheit;

   cout<<"Grados Celcius"<<'\t';
   cout<<"Grados Farenheit"<<endl;

   while (Celcius <= 50)
   {
   cout<<Celcius<<'\t'<<'\t';

   farenheit=((1.8)*(Celcius))+(32);
   cout<<farenheit<<endl;
   cout<<endl;

   Celcius=Celcius+5;
   }

   getch ();
}
