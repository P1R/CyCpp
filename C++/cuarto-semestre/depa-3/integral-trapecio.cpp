/*******************************************************
Escuela Superior de Ingenier�a Mec�nica y El�ctrica
Alumnos: 
        Perez-negr�n Rocha David Eugenio
        Osmar Trujillo Huazo
Equipo:9 
Profesor: Cort�s P�rez Alejandro
*******************************************************/

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>

using namespace std;
class trapecio {
	private:
		float Int,I,a,b,fa,fb;
      float n,x,h,ah,fah,fah1;

	public:
		void datos();
		float calcular_integral();
		float funciones ();
		float metodo();
		void resultados ();
		};



void trapecio::datos ()
{

	cout<<"Introduce el intervalo:\n";
	cout<<"a =\t";
	cin>>a;
	cout<<"\nb =\t";
	cin>>b;
   cout<<"\nNumero de trapecios:\n";
   cin>>n;
}



float trapecio::calcular_integral ()
{
	h=(b-a)/n;
	Int=pow(cos((3.1416/2)*cos(x)),2)/sin(x);
		return (Int);
}


float trapecio::funciones()
{
	fa=pow(a,3);
	fb=pow(b,3);

   for(int i=1;i<n;i++){
   ah=a+(i*h);
   fah+=pow(ah,3);}
   fah1=2*fah;
   return(fa,fb,fah1);

}



float trapecio::metodo()
{
	I=(h/2)*((fa+fah1+fb));
		return(I);
}


void trapecio::resultados()
{

	cout<<"\n\n  	f(a) = f("<<a<<") = \t"<<fa;
	cout<<"\n\n  	f(b) = f("<<b<<") = \t"<<fb;
	cout<<"\n\n  	El valor de la integral es:\t "<<I << endl;
	}



	 main ()
	{

		cout<<"	Regla del Trapecio a la funcion:";
		cout<<"\n\n	f(x) = x^3\n";
		trapecio obj;
		obj.datos();
		obj.calcular_integral();
		obj.funciones();
		obj.metodo();
		obj.resultados();
      getchar();
	}
