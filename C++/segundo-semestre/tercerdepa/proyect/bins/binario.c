#include <stdio.h>

main(){
    
    int bin[8]={0,0,0,0,0,0,0,0}, i, j;
    const int valor[10]={256,128,64,32,16,8,4,2,1,0};
    char n;

	printf("ingresa el digito:");
	scanf("%c", &n);

    for(i = 0; i <= 8; ++i){
	 if(n <= valor[i] && n >= valor[i+1]){ 
	    bin[i] = 1;
	    n = n - (valor[i+1]);
	}
	
    
    }
    
	printf("el valor es: ");
        for(i = 0; i < 8; ++i){
	       printf("%d", bin[i]);
	}
    printf("\n");
      
}