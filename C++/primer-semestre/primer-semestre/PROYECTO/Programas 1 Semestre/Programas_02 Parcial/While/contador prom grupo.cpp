#include <iostream.h>
#include <conio.h>

main ()
{
	float Calif, Promedio, Contador=1, Suma=0;

	while (Contador <= 10)
   {
   cout<<"Da la calificacion:"<<endl;
   cin>>Calif;
   cout<<endl;
   Suma=Suma+Calif;
   Contador ++;
   }

   Promedio=(Suma)/(10);
   cout<<"El promedio del grupo es: "<<Promedio;

   getch();
}
