#include <iostream.h>
#include <conio.h>

main ()
{
	int contador=1, cuadrado, cubo;

   cout<<"Numero"<<'\t';
   cout<<"Cuadrado"<<'\t';
   cout<<"Cubo"<<endl;

   while (contador <= 10)
   {
   cout<<contador<<'\t';

   cuadrado=contador*contador;
   cout<<"    "<<cuadrado;

   cubo=cuadrado*contador;
   cout<<'\t'<<'\t'<<cubo<<endl;
   cout<<endl;

   contador ++;
   }

   getch ();
}
