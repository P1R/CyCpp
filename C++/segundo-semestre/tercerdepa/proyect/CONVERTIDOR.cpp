#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include </home/piro/C++/segundo-semestre/tercerdepa/proyect/acerca.h>

using namespace std;

class pass{
    protected:
	char x;
    
    public:
	    void leer(void);
	    void caracter(void);
	    void ascii(void);
	pass(char);
};

void pass::leer(void){
    cout << "ingresa digito: ";
    cin >> x;
}

void pass::caracter(void){
    cout << "el caracter es:";
    putchar(x);
    cout << '\n';
}

void pass::ascii(void){
    int ASCII;
	ASCII = x;
    cout << "el valor ASCII del caracter es:" << ASCII << '\n';
}


pass::pass(char D = '\0'){
    x = D;
}

class bina:virtual public pass{
    protected:
	
	int X;
	                    
    public:
	 bina(char a = '\0', char b = '\0'):pass(b){
	    X = a;
	}
	void binread(void);
	void binario(void);
};


void bina::binario(void){
    int bin[9]={0,0,0,0,0,0,0,0,0}, i, j, N = 0;
const int valor[10]={256,128,64,32,16,8,4,2,1,0};
	
	
            for(i = 0; i < 8; ++i){
            	 if(X <= valor[i] && X > valor[i+1]){ 
                    bin[i] = 1;
                X = X - (valor[i+1]);
                }
     }

    cout << "el valor es: ";
    for(i = 0; i < 8; ++i){
      cout << bin[i];
    cout << "    ";
    }
    cout << '\n';
}

void bina::binread(){
    char E;
    cout << "ingresa caracter para convertir a binario:";
	cin >> E;
    X = E;
}


struct octave:virtual public bina{
	void octa(void);
};

void octave::octa(){
    int acumulado = 0, N, i, o = 0, octal = 0;
    
    char n;
    
    cout << "ingresa el digito: ";
        cin >> n;
    N = n;
    for(i = 0; i < N; ++i){
        ++o;
	if(i >= 0 && i < 63){
            if(o == 8){
	        acumulado = acumulado + 2;
    		    o = 0;
    	    }
	}
        else if(i == 63){
	    acumulado = acumulado + 22;
	        o = 0;
	}
	else if(i >= 71){
	        if(o == 8){
	    	    acumulado = acumulado + 2;
		        o = 0;
		}
	}
    }
    
    cout << "su valor el sistema octal es: ";
            cout << (N + acumulado) << '\n';
}


main(){
    pass A;
    bina B;
    octave C;
    
    int op;
    do{
    cout << "\n\n\t\t\tPROGRAMA PARA CONVERSION DE CARACTERES\n\n";
    cout << "Ingresa el numero de una de las siguientes opciones:\n\n";
    cout << "1- Convertir caracter a su valor ascii\n";
    cout << "2- Convertir caracter a su valor binario\n";
    cout << "3- Convertir caracter a su valor octal\n";
    cout << "4- Acerca de\n";
    cout << "5- Salir\n";
    cout << "\t\t\topcion:";
	cin >> op;
	
	switch(op){
	    case 1:
		    A.leer();
		    A.caracter();
		    A.ascii();
		    break;
	    case 2:
		    B.binread();
		    B.binario();
		    break;
	    case 3:
		    C.octa();
		    break;
	    case 4:
		    about();
		    break;
		    
	    default:
		cout << "hasta pronto ;)\n";
		    break;
    }
    
}
while(op != 5);

}
