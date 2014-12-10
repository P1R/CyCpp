#include <iostream.h>
#include <conio.h>
#include <math.h>
#define K 9000000000

//Declaracion de la funcion
float Corriente (float,float);
float Voltaje (float,float);
float Resistencia (float,float);
float Ley_de_Coulomb (float, float, float);
float Formula_General_Mas (float,float,float);
float Formula_General_Menos (float,float,float);

//Definicion de la funcion
float Corriente (float v,float r)
{
	float resultado;
	resultado= v/r;
	return resultado;
}
float Voltaje (float i,float res)
{
	float resultado;
	resultado= i*res;
	return resultado;
}
float Resistencia (float vol,float corr)
{
	float resultado;
	resultado= vol/corr;
	return resultado;
}
float Ley_de_Coulomb (float carga_uno,float carga_dos,float distancia)
{
	float Fuerza;
	Fuerza= ((carga_uno*carga_dos)/(distancia*distancia))*K;
	return Fuerza;
}
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
main ()
{

	char opcion,op_dos;
do
{
	cout<<"Elegir Opcion"<<endl;
  	cout<<" "<<endl;
  	cout<<"a. Opcion Formula Corriente"<<endl;
  	cout<<"b. Opcion Formula Voltaje"<<endl;
  	cout<<"c. Opcion Formula Resistencia"<<endl;
  	cout<<"d. Opcion Ley de Coulomb"<<endl;
   cout<<"e. Opcion Formula General"<<endl;
  	cout<<endl;
  	cin>>opcion;
  	cout<<endl;

   switch (opcion)
   {
      case 'a':
      {
      cout<<"Formula para la Corriente: I=V/R"<<endl;
   	cout<<" "<<endl;
      float v,r;
   	cout<<"Dar Voltaje"<<endl;
		cin>> v;
		cout<<"Dar Resistencia"<<endl;
		cin>> r;
		cout<<"La corriente es "<<Corriente (v,r);
      cout<<" "<<endl;
      break;
      }

      case 'b':
      {
      cout<<"Formula para el Voltaje: V=I*R"<<endl;
   	cout<<" "<<endl;
      float i,res;
		cout<<"Dar Corriente"<<endl;
		cin>> i;
		cout<<"Dar Resistencia"<<endl;
		cin>> res;
		cout<<"El Voltaje es "<<Voltaje (i,res);
      cout<<" "<<endl;
      break;
      }

      case 'c':
      {
      cout<<"Formula para la Resistencia: R=V/I"<<endl;
   	cout<<" "<<endl;
      float vol,corr;
		cout<<"Dar Voltaje"<<endl;
		cin>> vol;
		cout<<"Dar Corriente"<<endl;
		cin>> corr;
		cout<<"La resistencia es "<<Resistencia (vol,corr);
      cout<<" "<<endl;
      break;
      }

      case 'd':
      {
      cout<<"Fuerza de atraccion/repulsion entre dos cargas"<<endl;
   	cout<<endl;
      float carga_uno,carga_dos,distancia;
   	cout<<"Da Primer carga"<<endl;
   	cin>>carga_uno;
   	cout<<"Da Segunda carga"<<endl;
   	cin>>carga_dos;
   	cout<<"Dar distancia"<<endl;
   	cin>>distancia;
   	cout<<"La Fuerza es: "<<Ley_de_Coulomb (carga_uno,carga_dos,distancia)<<endl;
      cout<<" "<<endl;
      break;
      }

      case 'e':
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
      cout<<" "<<endl;
      break;
      }

      default:
      cout<<"Opcion Incorrecta"<<endl;
   }

      cout<<"Deseas usar el Menu? S/N"<<endl;
		cin>>op_dos;
      cout<<endl;

}while (op_dos=='s'||op_dos=='S');

      getch();
}