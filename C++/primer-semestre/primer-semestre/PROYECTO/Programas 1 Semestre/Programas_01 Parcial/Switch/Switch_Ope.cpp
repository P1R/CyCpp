#include <iostream.h>
#include <conio.h>

main ()
{
	char opcion;
	cout<<"Elegir Opcion"<<endl;
  	cout<<" "<<endl;
  	cout<<"a. Opcion Adicion"<<endl;
  	cout<<"b. Opcion Sustraccion"<<endl;
  	cout<<"c. Opcion Multiplicacion"<<endl;
  	cout<<"d. Opcion Division"<<endl;
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

      default:
      cout<<"Opcion incorrecta"<<endl;
   }

      getch();
}
