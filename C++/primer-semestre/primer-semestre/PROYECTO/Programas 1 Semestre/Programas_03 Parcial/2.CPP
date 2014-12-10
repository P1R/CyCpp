#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int comparacion (const void *a, const void *b)
{

if ((*(int*)a)<*((int *)b))
return (1);
else if (*((int *)a)>*((int *)b))
return (-1);
else
return (0);}


void main ()
{int i;
int x[]={5,8,2,7,9};
clrscr();
printf("\n Estado inicial \n");
for (i=0;i<5;i++)
printf("\n %d \n",x[i]);
qsort((void *)x ,5,sizeof(x[0]),comparacion);
printf("\n \n Estado Final :\n");
for (i=0;i<5;i++)
printf(" \n %d \n",x[i]);
getch();
}