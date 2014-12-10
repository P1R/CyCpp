#include <iostream.h>
#include <conio.h>
#include <math.h>

main()
{
	float Num_uno,Num_dos,Num_tres;
   cout<<"Diferencia de Numeros Desiguales "<<endl;
   cout<<endl;
   cout<<"Dar Primer Numero:"<<endl;
   cin>>Num_uno;
   cout<<"Dar Segundo Numero:"<<endl;
   cin>>Num_dos;
   cout<<"Dar Tercer Numero:"<<endl;
   cin>>Num_tres;

   if(Num_dos<Num_tres)
   if(Num_tres<Num_uno)
   {
   cout<<endl;
   cout<<"Numero Mayor :"<<Num_uno<<endl;
   cout<<endl;
   cout<<"Numero Menor :"<<Num_dos<<endl;
   }

   if(Num_tres<Num_dos)
   if(Num_dos<Num_uno)
   {
   cout<<endl;
   cout<<"Numero Mayor :"<<Num_uno<<endl;
   cout<<endl;
   cout<<"Numero Menor :"<<Num_tres<<endl;
   }

   if(Num_uno<Num_tres)
   if(Num_tres<Num_dos)
   {
   cout<<endl;
   cout<<"Numero Mayor :"<<Num_dos<<endl;
   cout<<endl;
   cout<<"Numero Menor :"<<Num_uno<<endl;
   }

   if(Num_tres<Num_uno)
   if(Num_uno<Num_dos)
   {
   cout<<endl;
   cout<<"Numero Mayor :"<<Num_dos<<endl;
   cout<<endl;
   cout<<"Numero Menor :"<<Num_tres<<endl;
   }

   if(Num_uno<Num_dos)
   if(Num_dos<Num_tres)
   {
   cout<<endl;
   cout<<"Numero Mayor :"<<Num_tres<<endl;
   cout<<endl;
   cout<<"Numero Menor :"<<Num_uno<<endl;
   }

   if(Num_dos<Num_uno)
   if(Num_uno<Num_tres)
   {
   cout<<endl;
   cout<<"Numero Mayor :"<<Num_tres<<endl;
   cout<<endl;
   cout<<"Numero Menor :"<<Num_dos<<endl;
   }

   getch();
}
