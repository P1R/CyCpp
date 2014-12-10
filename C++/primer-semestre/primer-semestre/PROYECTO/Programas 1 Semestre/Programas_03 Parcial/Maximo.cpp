#include <iostream.h>
#include <conio.h>

main()
{
	int i, num[4];
	int maximo=0;

	for(i=0; i<4; i++)
	{
	cout<<"Dame los numeros"<<endl;
	cin>>num[i];
	}

	for(i=0; i<4 ;i++)

		if (maximo <= num[i])
		maximo=num[i];
		cout<<"El maximo es: "<<maximo<<endl;

   getch();
}
