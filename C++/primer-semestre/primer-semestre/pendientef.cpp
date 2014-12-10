 # include <iostream.h>
# include <conio.h>
# include <math.h>
# define pi 3.1416
  // declaracion de funcion

int area_cuadrado(int,int);
int area_triangulo(int,int);
int area_rectangulo(int,int);
int area_circulo(int,int);

  int area_cuadrado(int luno,int ldos)
{
 int res;
 res=luno * ldos;
	return res;
 }


 int area_triangulo(int base,int altura)
{
 int res;
 res=(base * altura)/2;
	return res;
 }


int area_rectangulo(int bas,int altu)
{
 int res;
 res=bas * altu;
	return res;
 }


int area_circulo(int radio)
{
 int res;
 res=pi * (radio * radio);
	return res;
 }
 main()

 {
  int area;
  int luno,ldos,base,altura,bas,altu,radio;


   cout<<endl<<" areas "<<endl;
   cout<<"INDICE"<<endl;
   cout<<"1-area_cuadrado"<<endl;
   cout<<"2-area_triangulo"<<endl;
   cout<<"3-area_rectangulo"<<endl;
   cout<<"4-area_circulo"<<endl;
   cout<<"area qu desea calcular"<<endl;
   cin>>area;

switch(area)
	{

	case 1:

			  cout<<" area_cuadrado"<<endl;
			  cout<<"dame el luno:"<<endl;
			  cin>>luno;
			  cout<<"dame el ldos:"<<endl;
			  cin>>ldos;
           cout<<"el resultado es:"<<area_cuadrado( luno,ldos)<<endl;

	 case 2:
			  cout<<endl<<" area_triangulo"<<endl;
			  cout<<"dame la base:"<<endl;
			  cin>>base;
			  cout<<"dame la altura:"<<endl;
			  cin>>altura;
           cout<<"el resultado es:"<<area_triangulo(base,altura)<<endl;

    case 3:

			  cout<<endl<<" area_rectangulo"<<endl;
			  cout<<"dame la bas:"<<endl;
			  cin>>bas;
			  cout<<"dame la altu:"<<endl;
			  cin>>altu;
           cout<<"el resultado es:"<<area_rectangulo(bas,altu)<<endl;

    case 4:

			  cout<<" area_circulo"<<endl;
			  cout<<"dame el radio:"<<endl;
			  cin>>radio;
           cout<<"el resultado es:"<<area_circulo(radio)<<endl;


}

getch();



}

