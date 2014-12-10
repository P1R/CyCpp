#include <iostream.h>
#include <conio.h>

main ()
{

	int m=10;
   int n;

   n=++m;

   cout<<"m= "<<m<<endl;
   cout<<"n= "<<n<<endl;
   cout<<"__________________"<<endl;

   n=m++;

   cout<<"m= "<<m<<endl;
   cout<<"n= "<<n<<endl;
   cout<<"__________________"<<endl;

   cout<<"m= "<<m++<<endl;
   cout<<"m= "<<++m<<endl;

   getch();
}

