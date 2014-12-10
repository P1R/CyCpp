#include <stdio.h>
#include <conio.h>

void main()
{ int i,j,pos,menor;
int *x,n[5]={5,8,2,7,9};
int vartemp;
x=n;
for (i=0;i<5;i++)
{
menor=x[i];
pos=i;
for (j=i+1;j<5;j++)
{
if (x[j]<menor)
{
menor=x[j];
pos=j;
}
}
vartemp=x[i];
x[i]=x[pos];
x[pos]=vartemp;
}
clrscr();
for (i=0;i<5;i++)
printf("\n n[%d]=%d",i,x[i]);
getch();
}