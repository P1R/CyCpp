#include <iostream.h>
#include <conio.h>
#include <math.h>


//Declaracion de la funcion
float Raiz_de_un_num (float);
//Definicion de la funcion
float Raiz_de_un_num (float Num)
{
	float resultado;
	resultado= sqrt(Num);
	return resultado;
}
//Llamar a la funcion
main ()
{
	float Num;
   cout<<"La Raiz de un numero"<<endl;
   cout<<" "<<endl;
   cout<<"Da Num"<<endl;
   cin>>Num;
   cout<<endl;
   cout<<"El resultado es "<<Raiz_de_un_num (Num);
   getch();
}