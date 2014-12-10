#include <iostream.h>
#include <conio.h>

//Declaracion de la funcion
void Area_Triangulo (void);
//Definicion de la funcion
void Area_Triangulo (void)
{
	float base, altura, area;
   cout<<"Dar base "<<endl;
	cin>> base;
   cout<<"Dar altura "<<endl;
	cin>> altura;
	area=base*altura/2;
   cout<<"El resultado es "<<area;
}
//Llamar a la funcion
main ()
{
	Area_Triangulo();
	getch();
}