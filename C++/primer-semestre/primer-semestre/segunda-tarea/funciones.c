#include <stdio.h>

int suma(int,int); //declaracion de la funcion

int suma(int x, int y) //definicion de la función
{
int res;
    res = x + y;
    return res;
}

main()		//llamar a la funcion en el main
{
int a, b; //variables locales

printf("dame un numero: ");
    scanf("%d", &a);
printf("dame otro numero: ");
    scanf("%d", &b);
printf("el resultado es: %d\n", suma(a,b));
}