#include <stdio.h>

main()
{
    int c, espacios = 0, aste = 0;
    
    while((c = getchar()) != EOF ){
	if(c == ' ')
	++espacios;
	else if(c == '*')
	++aste;
	
	}
    printf("numero de espacios %d numero de asteriscos %d \n", espacios, aste);
}