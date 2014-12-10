#include <stdio.h>

main()
{
    int c, saltos = 0, aste = 0;
    
    while((c = getchar()) != EOF ){
	if(c == '\n')
	++saltos;
	else if(c == '*')
	++aste;
	
	}
    printf("numero de saltos %d numero de asteriscos %d \n", saltos, aste);
}