#include <iostream.h>
#include <conio.h>
#define max 5

main()

{
	int A, B, C, D, E, F, res1, res2, res3, producto;

   cout<<"Vector A"<<endl;
   cout<<endl;
	cout<<"Dame dato [i] del vector A: ";
   cin>> A;
   cout<<endl;
   cout<<"Dame dato [j] del vector A: ";
   cin>> B;
   cout<<endl;
   cout<<"Dame dato [k] del vector A: ";
   cin>> C;
   cout<<endl;

   cout<<"Vector B"<<endl;
   cout<<endl;
	cout<<"Dame dato [i] del vector B: ";
   cin>> D;
   cout<<endl;
   cout<<"Dame dato [j] del vector B: ";
   cin>> E;
   cout<<endl;
   cout<<"Dame dato [k] del vector B: ";
   cin>> F;
   cout<<endl;

	res1= A*D;
   res2= B*E;
   res3= C*F;
   producto=res1+res2+res3;
   cout<<endl;
   cout<<"El Producto punto es: "<<producto;

	getch();
}

