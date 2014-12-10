#include <iostream.h>
#include <conio.h>

main ()
{
char nombre [20],nombre2 [20],nombre3 [20];

	cout<<"Dame el nombre: ";
	cin.getline (nombre,20, '\n');
   cout<<endl;

   cout<<"Dame el nombre: ";
	cin.getline (nombre2,20, '\n');
   cout<<endl;

   cout<<"Dame el nombre: ";
	cin.getline (nombre3,20, '\n');
   cout<<endl;

		cout<<"Nombre 1: "<<nombre<<endl;
		cout<<"Nombre 2: "<<nombre2<<endl;
		cout<<"Nombre 3: "<<nombre3<<endl;

getch();
}
