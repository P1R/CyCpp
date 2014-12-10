#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * sacar(float, char *);

int main()
{
    char A[5];
    int x;
    float dato;
    scanf("%f",&dato); // capturamos una frecuencia para hacer pruebas	
    //itypeof(sacar(dato,A));
    x = sacar(dato,A);
    printf("%d", x);
    puts(sacar(dato, A));
    return 0;
}
char * sacar(float dato, char * A){
    int i, B[5]={0,0,0,0,0};
   
    dato/=10000; //primer paso dividimos el numero
    for(i = 0; dato>=0; ++i){ //recorremos el arreglo hasta que frecuencia = 0
	    B[i]=dato;  //comparamos el valor ya vididio con B[i] que trunca el flotante
	    dato=dato-B[i];//le restamos el valor que truncamos al flotante y lo igualamos
	    dato*=10; //lo multiplicamos por 10 para recorrerlo y truncar de nuevo en siguiente ciclo
	}
    for(i = 0; B[i] >= 0 && B[i] <= 9; ++i)//siempre y cuando este en el rango
	    A[i]=(B[i]+'0'); // se iguala a un arreglo tipo caracter sumandole 48 o '0'
			//para que se convierta en caracter
    
    //puts(A);//imprimios la cadena tipo caracter, tu sabes como imprimirla en tu display...
    return A;
}

