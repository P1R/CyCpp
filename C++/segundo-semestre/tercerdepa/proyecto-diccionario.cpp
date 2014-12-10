/*para utilizar con netcat*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define MAX	62
#define MIN	0

using namespace std;

class pass{
    char a;
    int n;
    
    public:
	void genera(void);
	//void comprar(void);
	pass(char);
};

void pass::genera(void){
        
        for(a = '0';a <= 'z'; a++){
            if (a == ':')
                a = 'A';
            else if (a == '[')
                a = 'a';
        cout << a << '\n';
        ++n;
        }

}
/*
void pass::comprar(void){
    if(n == MAX)
	n = 0;
    return 1;
} */

pass::pass(char A = '\0'){
    a = A;
}


main(){
    pass *ap, A;
    int n, i, j;
    char a, b;

    cout << "De cuantos digitos es la contraseña?:";
	cin >> n;
    //ap = new(pass[n]);
    
    //for(i = 0; i <= n; ++i)
	//ap[i].genera();
	    //if(ap[i].comprar = 1)
	    //for(j = 0; j <= )
    
    for(a = '0', b = '0';a <= 'z', b <= 'z'; ++a, ++b){
    
            if (a == ':')
                a = 'A';
            else if (a == '[')
                a = 'a';

            if (b == ':')
                b = 'A';
            else if (a == '[')
                b = 'a';
        

        for(i = 0; i < MAX; ++i,){
	    //A.genera();
	    cout << a;
	    if(i == MAX ){
		for(j = 0; j < MAX; ++j){
		//A.genera();
		    cout << b;
		    cout << '\n';
		}
	    }
        }
    }

}
