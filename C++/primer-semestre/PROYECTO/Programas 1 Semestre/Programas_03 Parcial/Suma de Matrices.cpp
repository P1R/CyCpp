#include <iostream.h>
#include <conio.h>
#define max 5

void Lee (float[][max], int);
void Muestra (float[][max],int);
void Suma (float[][max],float[][max],float[][max],int);

	void Lee (float A[][max], int n)
	{
    for (int i=1; i<n; i++)
    for (int j=1; j<n; j++)
     {
     cout<<"Dame los datos "<<"("<<i<<","<<j<<"): ";
     cin>>A[i][j];
     }
   }

   void Muestra (float A[][max], int n)
   {
    for (int i=1; i<n; i++)
    for (int j=1; j<n; j++)
		cout<<'\t'<<"("<<i<<","<<j<<") : "<<A[i][j]<<endl;
   }

   void Suma (float A[][max], float B[][max], float C[][max], int n)
   {
    for (int i=1; i<n; i++)
    for (int j=1; j<n; j++)

    C[i][j]= A[i][j]+B[i][j];
   }

int main ()
{
 int n=4;
 float A[max][max], B[max][max], C[max][max];

 cout<<endl;
 cout<<"SUMA DE MATRICES"<<endl;
 cout<<endl;
 cout<<"Matrix A"<<endl;
 cout<<endl;
 Lee(A,n);

 cout<<endl;
 cout<<"Matrix B"<<endl;
 cout<<endl;
 Lee(B,n);

 cout<<endl;
 cout<<"La Matrix A es: "<<endl;
 cout<<endl;
 Muestra (A,n);

 cout<<endl;
 cout<<"La Matrix B es: "<<endl;
 cout<<endl;
 Muestra (B,n);

 Suma (A,B,C,n);
 cout<<endl;
 cout<<"La Matriz sumada es"<<endl;
 cout<<endl;
 Muestra (C,n);

getch();
}