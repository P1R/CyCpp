#include <iostream.h>
#include <conio.h>
#include <math.h>

main ()
{
	float contador, raiz;

   cout<<"Numero  "<<'\t';
   cout<<"Raiz"<<'\t';
   cout<<endl;

	for (contador=1; contador <= 10;contador ++)
		{
      	cout<<contador<<'\t';

   		raiz=sqrt(contador);
  			cout<<"    "<<raiz<<endl;

      }
   getch ();
}
