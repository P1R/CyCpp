#include <iostream>
#include <math.h>
#define PI 3.1416
#define K 9e9

using namespace std;

//Declaracion de la funcion
float Area_Circulo (float);
float Area_Cuadrado (float);
float Area_Rectangulo (float,float);
float Area_Triangulo (float,float);

float Corriente (float,float);
float Voltaje (float,float);
float Resistencia (float,float);
float Ley_de_Coulomb (float, float, float);
float Formula_General_Mas (float,float,float);
float Formula_General_Menos (float,float,float);

//Definicion de la funcion
float Area_Circulo (float radio)
{
	float area;
	area=radio*radio*PI;
	return area;
}

float Area_Cuadrado (float lado)
{
	float resultado;
	resultado= lado*lado;
	return resultado;
}

float Area_Rectangulo (float base,float altura)
{
	float resultado;
	resultado= base*altura;
	return resultado;
}

float Area_Triangulo (float base_T,float altura_T)
{
	float resultado;
	resultado= base_T*altura_T/2;
	return resultado;
}

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
	Fuerza = ((carga_uno*carga_dos)/(distancia*distancia))*K;
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

main ()
{
	int opcion;
	char op_dos;
do
{
   cout<<endl;
   cout<<"PROGRAMAS PRIMER DEPARTAMENTAL"<<endl;
   cout<<endl;
	cout<<"Elegir Opcion"<<endl;
  	cout<<" "<<endl;
  	cout<<"1. Opcion Areas"<<endl;
  	cout<<"2. Opcion Operaciones Simples"<<endl;
  	cout<<"3. Opcion Formulas Matematicas"<<endl;
  	cout<<endl;
  	cin>>opcion;
  	cout<<endl;

   switch (opcion)
   {
      case 1:
      {
      	char opcion;
			cout<<"Elegir Opcion"<<endl;
  			cout<<" "<<endl;
  			cout<<"a. Opcion Area Circulo"<<endl;
  			cout<<"b. Opcion Area Cuadrado"<<endl;
  			cout<<"c. Opcion Area Rectangulo"<<endl;
  			cout<<"d. Opcion Area Triangulo"<<endl;
  			cout<<endl;
  			cin>>opcion;
  			cout<<endl;

   		switch (opcion)
   		{
      		case 'a':
      		{
      			cout<<"Area del Circulo"<<endl;
					float radio;
					cout<<"Dar radio"<<endl;
					cin>> radio;
					cout<<"El area es "<<Area_Circulo (radio)<<endl;
   				cout<<" "<<endl;
      			break;
      		}

      		case 'b':
      		{
      			cout<<"Area del Cuadrado"<<endl;
					float lado;
					cout<<"Dar lado"<<endl;
					cin>> lado;
					cout<<"El resultado es "<<Area_Cuadrado (lado)<<endl;
   				cout<<" "<<endl;
      			break;
      		}

      		case 'c':
      		{
      			cout<<"Area del Rectangulo"<<endl;
				  	float base,altura;
					cout<<"Dar base"<<endl;
					cin>> base;
					cout<<"Dar altura"<<endl;
					cin>> altura;
					cout<<"El resultado es "<<Area_Rectangulo (base,altura)<<endl;
   				cout<<" "<<endl;
      			break;
      		}

      		case 'd':
      		{
      			cout<<"Area del Triangulo"<<endl;
					float base_T,altura_T;
					cout<<"Dar base"<<endl;
					cin>> base_T;
					cout<<"Dar altura"<<endl;
					cin>> altura_T;
					cout<<"El resultado es "<<Area_Triangulo (base_T,altura_T)<<endl;
   				cout << " " <<endl;
      			break;
      		}
      		
      	default:
      	cout<<"Opcion incorrecta"<<endl;
      	}

		break;
      }


   	case 2:
      {
      	char opcion;
			cout<<"Elegir Opcion"<<endl;
  			cout<<" "<<endl;
  			cout<<"a. Opcion Adicion"<<endl;
  			cout<<"b. Opcion Sustraccion"<<endl;
  			cout<<"c. Opcion Multiplicacion"<<endl;
  			cout<<"d. Opcion Division"<<endl;
         cout<<"e. Opcion Diferencia de numeros"<<endl;
  			cout<<endl;
  			cin>>opcion;
  			cout<<endl;

   		switch (opcion)
   		{
      		case 'a':
      		{
      			float num_1;
					float num_2;
					float num_3;

					cout<<"Dar num_1"<<endl;
					cin>> num_1;
					cout<<"Dar num_2"<<endl;
					cin>> num_2;
					num_3=num_1+num_2;
      			cout<<endl;
					cout<<"La suma es "<<num_3;
      			break;
      			}

      		case 'b':
      		{
      			float num_1;
					float num_2;
					float num_3;

					cout<<"Dar num_1"<<endl;
					cin>> num_1;
					cout<<"Dar num_2"<<endl;
					cin>> num_2;
					num_3=num_1-num_2;
      			cout<<endl;
					cout<<"La resta es "<<num_3;
      			break;
      		}

      		case 'c':
      		{
      			float num_1;
					float num_2;
					float num_3;

					cout<<"Dar num_1"<<endl;
					cin>> num_1;
					cout<<"Dar num_2"<<endl;
					cin>> num_2;
					num_3=num_1*num_2;
      			cout<<endl;
					cout<<"El producto es "<<num_3;
      			break;
      		}

      		case 'd':
      		{
      			float num_1;
					float num_2;
					float num_3;

					cout<<"Dar num_1"<<endl;
					cin>> num_1;
					cout<<"Dar num_2"<<endl;
					cin>> num_2;
					num_3=num_1/num_2;
      			cout<<endl;
					cout<<"El cociente es "<<num_3;
      			break;
      		}

            case 'e':
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
             }
             
      	default:
      	cout<<"Opcion incorrecta"<<endl;
   		}

   	break;
      }

   	case 3:
   	{
      	char opcion;
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
      			break;
      		}

      	default:
      	cout<<"Opcion incorrecta"<<endl;
   		}

   	break;
   	}

   default:
      cout<<"Opcion Incorrecta"<<endl;
      }

      cout<<endl;
      cout<<endl;
      cout<<"Deseas regresar a el Menu? S/N"<<endl;
		cin>>op_dos;
      cout<<endl;

}
while (op_dos=='s'||op_dos=='S');

}