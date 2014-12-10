#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
main()
{
    char a[]={'M','!','a','"','5','#','t','$','3','%','R','&','\0'}, b[13];
    int n, si, no;
    
    si=no=0;
    
    printf("Cuantas veces intentar?:");
	fflush ( stdin );
    for(scanf("%d",&n); n != 0; --n){
	printf("ingresa password:");
	    //gets(b);
	    scanf("%s", b);
	if(strcmp(a,b) == 0){
	    printf("correcto! ;)\n");
	    si++;
	}
	else{
	    printf("error!, intente de nuevo :s\n");
	    no++;
	}
    }
    printf("correctos:%d, incorrectos:%d\n", si, no);
}