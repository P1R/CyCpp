#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char P[6];

class password{
    private:
	char passwd[6];
	char entrada[6];
    public:
	void ingresa();
	int compara();
	password(char *);
	password(){
	strcpy(P, "arlis");
	}
};

password::password(char * P){
     strcpy(passwd, P);
    
}


int password::compara(){
    int x;
    x = strcasecmp(passwd, entrada);
    return x;
} 
    
void password::ingresa(){
    int c, i;
	for(i = 0;c = getchar(); i++){
	    entrada[i] = c;
	    cout << "*";
	}
}

main(){
    password A;
    cout << "\ningresa la contraseña:";
    A.ingresa();
    if(A.compara() == 0){
	cout << "contraseña correcta";
    }
    else
	cout << "contraseña incorrecta";
}
    