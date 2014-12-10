#include <iostream>

using namespace std;

main(){
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