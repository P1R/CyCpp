#include <iostream.h>
#include <conio.h>
#include <math.h>

//Declaracion de la funcion
float Formula_General_Mas (float,float,float);
float Formula_General_Menos (float,float,float);

//Definicion de la funcion
float Formula_General_Mas (float a,float b,float c)
{
   float Raiz_Mas;
	Raiz_Mas= (-b+sqrt((b*b)-((a*c)+(a*c)+(a*c)+(a*c))))/(a+a);
	return Raiz_Mas;
}

float Formula_General_Menos (float a,float b,float c)
{
   float Raiz_Menos;
	Raiz_Menos= (-b-sqrt((b*b)-((a*c)+(a*c)+(a*c)+(a*c))))/(a+a);
	return Raiz_Menos;
}

//Llamar a la funcion
main()

{
	cout<<"Las Raices de una ecuacion"<<endl;
   cout<<endl;
   float a,b,c;
   cout<<"Dar a"<<endl;
   cin>> a;
   cout<<"Dar b"<<endl;
   cin>> b;
   cout<<"Dar c"<<endl;
   cin>> c;
   cout<<endl;
   cout<<"La Raiz Positiva es : "<<Formula_General_Mas (a,b,c)<<endl;
   cout<<endl;
   cout<<"La Raiz Negativa es : "<<Formula_General_Menos (a,b,c)<<endl;
   getch();
}








