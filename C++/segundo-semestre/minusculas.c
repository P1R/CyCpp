#include <stdio.h>

char minusculas(char);

char minusculas(char x){
	x += 32;
    return x;
}

main()
{
    char x;
    printf("ingresa la letra: ");
	scanf("%c", &x);
    printf("su valor en minusculas es: %c\n", minusculas(x));
}