#include <iostream.h>
#include <conio.h>

main()
{
	int i, num[4];
	int minimo=4;

	for(i=0; i<4; i++)
	{
	cout<<"Dame los numeros"<<endl;
	cin>>num[i];
	}

	for(i=0; i<4 ;i++)

		if (minimo >= num[i])
		minimo=num[i];
		cout<<"El minimo es: "<<minimo<<endl;

   getch();
}