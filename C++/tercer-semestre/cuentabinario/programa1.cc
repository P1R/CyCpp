//programa de DAVID EUGENIO PEREZNEGRON ROCHA 3CM8 licencia GPLV3

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

const int table[10]={256,128,64,32,16,8,4,2,1,0};


using namespace std;

struct codigos{
    int i, j;
    char C[50];
    int D[50];
    int bin[8];
    
    void leer(void);
    void leernum(void);
    void imprime256(void);
    void imprime(void);
    void imprimenum(void);
    codigos(char *);
};

codigos::codigos(char *cad = "\0"){
    strcpy(C, cad);
    for(i = 0; i <= 50; ++i)
	D[i] = 0;
    for(i = 0; i <= 8; ++i)
	bin[i] = 0;
    
}

void codigos::leer(){
	cout << "ingresa cadena:";
	cin.getline(C,50,'\n');
	for(i = 0; i < 50; ++i)
	    D[i] = C[i];
    }
    
void codigos::leernum(){
	cout << "ingresa numero:";
	cin >> D[0];
}
    
void codigos::imprime(){


    cout << "\nASCII\tBINARIO   OCTAL\tHEXADECIMAL\n\n";
    
    //seccion que imprime ASCII
    for(i = 0; D[i] != 0; ++i){
    //condicion para manejar ASCII EXTENDIDO
    if(D[i] < 0 || C[i] < 0){
	D[i] = 256+D[i];
	C[i] = D[i];
	}
	
	cout << D[i] << ' ';
	//seccion que imprime binario
	for(j = 0; j <= 8; ++j){
    	     if(D[i] <= table[j] && D[i] >= table[j+1]){ 
        	    bin[j] = 1;
    		    D[i] = D[i] - (table[j+1]);
    	    }
	}
	    cout << '\t';
    		for(j = 0; j < 8; ++j){
            	    cout << bin[j];
    		}
    	for(j = 0; j <= 8; ++j) //limpiar bin
	    bin[j] = 0;
	//imprime octal
	printf("   %o", C[i]);
	//imprime hexadecimal
	printf("\t%X", C[i]);
    cout << '\n';
    }
}

void codigos::imprime256(){
for(int L = 0; L<256; ++L){    
    C[0]  =  D[0] = L;
    //seccion que imprime binario
        for(j = 0; j <= 8; ++j){
             if(D[0] <= table[j] && D[0] >= table[j+1]){ 
                    bin[j] = 1;
                    D[0] = D[0] - (table[j+1]);
            }
        }
                for(j = 0; j < 8; ++j){
                    cout << bin[j];
                }
        for(j = 0; j <= 8; ++j) //limpiar bin
            bin[j] = 0;
	cout << endl;
}
}
void codigos::imprimenum(){
    cout << "\nBINARIO   OCTAL\tHEXADECIMAL\n\n";
	C[0]  = D[0];
    //seccion que imprime binario
	for(j = 0; j <= 8; ++j){
    	     if(D[0] <= table[j] && D[0] >= table[j+1]){ 
        	    bin[j] = 1;
    		    D[0] = D[0] - (table[j+1]);
    	    }
    	}
    		for(j = 0; j < 8; ++j){
            	    cout << bin[j];
    		}
    	for(j = 0; j <= 8; ++j) //limpiar bin
	    bin[j] = 0;
	//imprime octal
	printf("   %o", C[0]);
	//imprime hexadecimal
	printf("\t%X", C[0]);
    cout << '\n';
}

main()
{
    codigos A;
    int op;
	system("clear");


    do{
	
	cout << "\tPROGRAMA DE CONVERSION DE CADENAS A BASES NUMERICAS Y TABLA ASCII\n";
	cout << "1 INGRESAR CADENA\n";
	cout << "2 INGRESA NUMERO:\n";
	cout << "3 IMPRIME hasta 256 Binario\n";
	cout << "4 SALIR\n";
	cout << "opcion:";
	    cin >> op;

	switch(op){
	    case 1:
		    cin.ignore();
		    system("clear");
		    A.leer();
		    A.imprime();
		    cout << '\n';
		    break;
	    case 2:
		    cin.ignore();
		    system("clear");
		    A.leernum();
		    A.imprimenum();
		    cout << '\n';
		    break;
		    
	   case 3:
			cin.ignore();
			system("clear");
			A.imprime256();
			cout << '\n';
			break; 
	   case 4:
		    cout << "hasta pronto ;)\n";
		    break;
	    default:
		    cout << "ERROR!!!, seleccione opcion 1 ,2, 3 o 4\n";
		    break;
	}
    }
    //while(op != 4);
    while(op > 4 || op < 1);
}
