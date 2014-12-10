#include<iostream.h>
#include<conio.h>

void main(void)
 {
  int num[10],i,n;

  cout<<"Cuantos numeros quieres ingresar"<<endl;
  cin>>n;
  cout<<endl;

  for(i=0;i<n;i++)
   {
    cout<<"Dame el dato"<<endl;
    cin>>num[i];
   }

   cout<<"Tus numeros son  ";
   for(i=0;i<n;i++)
   {
    cout<<num[i];
   }


   cout<<"   El intercambio es  ";
   for(i-1;i>=0;i--)
    {
     cout<<num[i];
    }

   getch();

  }

