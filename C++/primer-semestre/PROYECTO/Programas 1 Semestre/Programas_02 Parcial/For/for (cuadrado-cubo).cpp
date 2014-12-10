#include <iostream.h>
#include <conio.h>

main ()
{
	int contador, cuadrado, cubo;

   cout<<"Numero"<<'\t';
   cout<<"Cuadrado"<<'\t';
   cout<<"Cubo"<<endl;

	for (contador=1; contador <= 10;contador ++)
		{
      	cout<<contador<<'\t';

   		cuadrado=contador*contador;
  			cout<<"    "<<cuadrado;

         cubo=cuadrado*contador;
   		cout<<'\t'<<'\t'<<cubo<<endl;
   		cout<<endl;

      }
   getch ();
}

