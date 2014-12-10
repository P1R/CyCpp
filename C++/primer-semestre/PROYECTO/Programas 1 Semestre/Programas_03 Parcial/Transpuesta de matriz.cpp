#include <iostream.h>
#include <conio.h>
#define max 5

void Lee (float[][max], int);
void Muestra (float[][max],int);

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
		cout<<'\t'<<"("<<i<<","<<j<<") : "<<A[j][i]<<endl;
   }

int main ()
{
 int n=4;
 float A[max][max];

 cout<<endl;
 cout<<"MATRIZ TRANSPUESTA"<<endl;
 cout<<endl;
 cout<<"Matrix A"<<endl;
 cout<<endl;
 Lee(A,n);

 cout<<endl;
 cout<<"La Matrix Transpuesta de A es: "<<endl;
 cout<<endl;
 Muestra (A,n);

 getch();
}