#include <stdio.h>
#include <conio.h>

long factorial (int);
void main(void)
{int i;
clrscr();
printf("NUMERO:\t FACTORIAL \n \n");
for (i=0;i<=10;i++)
printf("%d\t %ld \n",i,factorial (i));
getch ();
}

long  factorial (int n)
{
if (n<=1)   /*caso base*/
return 1;
else
return n*factorial (n-1);
}