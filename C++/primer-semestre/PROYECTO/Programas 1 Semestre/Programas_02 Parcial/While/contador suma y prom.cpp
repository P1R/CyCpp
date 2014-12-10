#include <iostream.h>
#include <conio.h>

main ()
{
	float num_datos, Dato, Promedio, Contador=0, Suma=0;

	cout<<"Da el numero de Datos"<<endl;
	cin>>num_datos;
   cout<<endl;

	while (Contador < num_datos)
   {
   cout<<"Da el dato"<<endl;
   cin>>Dato;
   cout<<endl;
   Suma=Suma+Dato;
   Contador ++;
   }

	cout<<"La suma es: "<<Suma<<endl;
   cout<<endl;
   Promedio=Suma/num_datos;
   cout<<"El promedio es: "<<Promedio;

   getch();
}
