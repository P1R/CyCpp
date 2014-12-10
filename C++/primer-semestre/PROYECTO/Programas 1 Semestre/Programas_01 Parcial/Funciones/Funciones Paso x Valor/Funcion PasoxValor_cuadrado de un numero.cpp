#include <iostream.h>
#include <conio.h>
#include <math.h>


//Declaracion de la funcion
float Cuadrado_de_un_num (float);
//Definicion de la funcion
float Cuadrado_de_un_num (float Num)
{
	float resultado;
	resultado= pow(Num,2);
	return resultado;
}
//Llamar a la funcion
main ()
{
	float Num;
   cout<<"El Cuadrado de un numero"<<endl;
   cout<<" "<<endl;
   cout<<"Da Num"<<endl;
   cin>>Num;
   cout<<endl;
   cout<<"El resultado es "<<Cuadrado_de_un_num (Num);
   getch();
}


