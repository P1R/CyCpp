#include <stdio.h>

main()
{
    int const valor[10]={256,128, 64, 32, 16, 8, 4, 2, 1, 0};
    int b[8]={0,0,0,0,0,0,0,0}, i, c;
    char a = '\0';
    
    

    while( ( c = getchar() ) != EOF ){
	for(i = 7; i >= 0; --i){
	    if(c == '1'){
		 b[i] = 1;
	    }
	    else if (c == '0'){
		b[i] = 0;
	    }
	    else
		break;
	}
    }
	/*
	for(i = 0; i <= 7; ++i){
	    if(b[i] == 1){
	     a = a + bin[i];
	     printf("paso3\n");
	     }*/
	    
	    //else if(c != 0 || c != 1){
	//	printf("error! entrada en binario..\n");
	//	break;
	  //  }
       //	}

    for(i = 0; i <= 7; ++i)
	printf("%d\n", b[i]);

    
    printf("el caracter es:%c\n", a);
}