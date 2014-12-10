#include <iostream>
#include <stdio.h>

using namespace std;

main(){
    
    int bin[8]={0,0,0,0,0,0,0,0}, i, j, N = 0;
    const int valor[10]={256,128,64,32,16,8,4,2,1,0};
    char n;

    cout << "ingresa el digito:";
	cin >> n;
    N = n;

    for(i = 0; i <= 8; ++i){
	 if(N <= valor[i] && N >= valor[i+1]){ 
	    bin[i] = 1;
	    N = N - (valor[i+1]);
	}
	
    
    }
    
    cout << "el valor es: ";
        for(i = 0; i < 8; ++i){
	       cout << bin[i];
	cout << "    ";
	}
	cout << '\n' << N << '\n';
    cout << '\n';

}