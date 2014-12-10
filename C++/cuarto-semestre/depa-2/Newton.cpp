/*******************************************************
Escuela Superior de Ingeniería Mecánica y Eléctrica
Alumnos:
    Perez-negrón Rocha David Eugenio
    Osmar trujillo huazo
Profesor:
    Cortés Pérez Alejandro
Programa de metodo de la interpolacion de newton
*************************************************/

# include <cstdio>
# include <cstdlib>
# include <iostream>
using namespace std;

#define   D double

class Newton

{
private:
      D * X, *Y, x, *B, r, m;
      int g, i, j;

public:
    Newton();
    ~Newton();
	void leer();
   	void metodo();
   	void imprime();
         D b(D X[], D Y[], int n)
      	{
  			D bres=0, ba=0;
  			if( n==0) return Y[n];
  			bres=(Y[n]-Y[n-1])/(X[n]-X[n-1]);
  			if(n==1) return bres;
  			ba=(Y[n-1]-Y[n-2])/(X[n-1]-X[n-2]);
  			return ( (bres-ba)/( X[n]-X[0] ) );
      	}
		};

Newton::Newton()
	{
   r=0;
   m=1;
   X=(D*)malloc(sizeof(D)*g+1);
   Y=(D*)malloc(sizeof(D)*g+1);
 	B=(D*)malloc(sizeof(D)*g+1);
   }
Newton::~Newton()
	{
   free(X);
   free(Y);
   free(B);
   }


void Newton::leer()
	{
   cout<<"De que grado desea la interpolacion:\t";
   cin>>g;
   cout<<"Ingresa los valores de la tabla\n";
   for(i=0;i<g+1;i++)
   	{
    	cin>>X[i];
      cin>>Y[i];
      }
 	for(i=0;i<g+1;i++)
   	{
      B[i]=b(X,Y,i);
      }
   cout<<"Numero a interpolar:\t";
   cin>>x;
   cout<<"f"<<g<<"(x)";
    }


void Newton::metodo()
	{
   for(i=0;i<g+1;i++)
   	{
 		if(B[i]>=0 && i<g && i>0)
      cout<<" + ";
  		cout<<B[i];
  		for(j=0;j<i;j++)
      	{
     		m*=x-X[j];
    		}
   	cout<<m;
    	r+=B[i]*m;
    	m=1;
      }
   }


void Newton::imprime()
	{
   cout<<"\nResultado"<<r;
 	getchar();
   }


int main()
	{

   Newton w;
   w.leer();
   w.metodo();
   w.imprime();
   getchar();
   }
