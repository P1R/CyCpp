#include <stdio.h>
#include <conio.h>

void ord (int x []);

void main()
{

	int i,x[5];
	clrscr ();

	for(i=0;i<5;i++)
   {
	printf("Dame %d valor: ",i+1);
	scanf("%d",&x[i]);
	}

	ord (x);
	for(i=0;i<5;i++)
	printf("i=%d , \n",x[i]);
	getch();
	}

	void ord (int x[])
	{
   int i,e,tem;
	for(e=0;e<5-1;e++)
	{
		for(i=e+1;i<5;i++)
		if (x[i]>x[e])
		{
		tem=x[e];
		x[e]=x[i];
		x[i]=tem;
      }
   }
	return;
}








