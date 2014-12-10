#include <iostream.h>
#include <conio.h>

//Declaracion de la funcion
void Area_Rectangulo (void);
//Definicion de la funcion
void Area_Rectangulo (void)
{
	float base, altura, area;
   cout<<"Dar base "<<endl;
	cin>> base;
   cout<<"Dar altura "<<endl;
	cin>> altura;
	area=base*altura;
   cout<<"El resultado es "<<area;
}
//Llamar a la funcion
main ()
{
	Area_Rectangulo();
	getch();
}