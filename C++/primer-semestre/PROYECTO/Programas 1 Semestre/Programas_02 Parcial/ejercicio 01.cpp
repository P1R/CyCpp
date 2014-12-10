#include <iostream.h>
#include <conio.h>

main ()

{
   int code;
do
  {
   cout<<endl;
  	cout<<"020.- Codigo generador 20w"<<endl;
   cout<<endl;
   cout<<"050.- Codigo generador 50w"<<endl;
   cout<<endl;
   cout<<"Dar codigo de encendido"<<endl;
   cin>>code;

	if (code==020)

   cout<<"Encender Generador de 20w"<<endl;

	if (code==050)

	cout<<"Encender Generador de 50w"<<endl;

	if (code!=020 && code!=050)
   {
   cout<<endl;
	cout<<"Codigo incorrecto"<<endl;
   cout<<"Generadores apagados"<<endl;
   cout<<"Reescribir codigo"<<endl;
   }

  }while (code!=020 && code!=050);

getch();

}