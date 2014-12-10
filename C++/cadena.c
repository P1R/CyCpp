#include <stdio.h>

main()
{
    char nom[30], comida[20], pelicula[20];

    printf("ingresa nombre completo:");
	gets(nom);
    printf("cual es tu comida favorita:");
	gets(comida);
    printf("cual es tu pelicula favorita:");
	gets(pelicula);
    system("clear");
    
    printf("tu nombre es: ");
	puts(nom);
    printf("tu comida favorita es: ");
	puts(comida);
    printf("tu pelicula favorita es: ");
	puts(pelicula);
}