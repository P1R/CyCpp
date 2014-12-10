#include <iostream.h>
#include <conio.h>
#define max 5

void Lee (float[], int);
void Muestra (float[],int);
void Suma (float[],float[],float[],int);

	void Lee (float A[], int n)
	{
    for (int i=1; i<n; i++)
    {
     cout<<"Dame los datos "<<"("<<i<<"): ";
     cin>>A[i];
    }
   }

   void Muestra (float A[], int n)
   {
    for (int i=1; i<n; i++)
    {
    cout<<"("<<i<<"): "<<A[i];
    cout<<endl;
    }
   }

   void Suma (float A[], float B[], float C[], int n)
   {
    int i;
    for (i=1; i<n; i++)
    C[i]=A[i]+ B[i];
   }

int main ()
{
 int n=4;
 float a[max], b[max], c[max];

 cout<<endl;
 cout<<"SUMA DE VECTORES"<<endl;
 cout<<endl;
 cout<<"Para el vector A"<<endl;
 cout<<endl;
 Lee(a,n);

 cout<<endl;
 cout<<"Para el vector B"<<endl;
 cout<<endl;
 Lee(b,n);

 cout<<endl;
 cout<<"El vector A es: "<<endl;
 cout<<endl;
 Muestra (a,n);

 cout<<endl;
 cout<<"El vector B es: "<<endl;
 cout<<endl;
 Muestra (b,n);

 Suma (a,b,c,n);
 cout<<endl;
 cout<<"El vector Resultante es"<<endl;
 cout<<endl;
 Muestra (c,n);

getch();
}