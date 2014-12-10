/*** Equipo 9,  ESIME Zacatenco IPN 4CM5
CODIGO PARA CALCULAR LN(X+1) por medio de la serie de maclaurin
Copyright (C) 2011  David Eugenio Perez-negron Rocha && Osmar Trujillo Huazo

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

Alumnos:
David Eugenio Perez-negron Rocha
Osmar Trujillo Huazo
***/

#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

float fctr(int);

using namespace std;

class serieTL{
    float sum, Ea, Er;
    float x;
    int n;

    public:
    void lee(void);
    void aprox(void);
    void Errores(void);
    void imprime(void);
    serieTL();
};

serieTL::serieTL(){
    sum = Ea = Er = 0;
    x = 0;
    n = 0;
}

void serieTL::lee(void){
    do{
    cout << "ingresa el numero de aproximaciones:";
        cin >> n;
    cout << "ingresa el valor de x:";
        cin >> x;
    }
    while( n <= 0 && x <= 0);

}

void serieTL::aprox(void){
for(int i = 1; i <= n; ++i){
        sum = sum + ((pow(-1,i+1)*fctr(i-1)*pow(x,i))/fctr(i));
    }
}

void serieTL::Errores(void){
    Ea = fabs(sum - log(x+1));
    Er = ((Ea / log(x+1)) * 100);

}

void serieTL::imprime(void){
    system("CLS");
    cout << "El valor aproximado es: " << sum << " para " << n << " terminos." << endl;
    cout << "El valor real es: " << log(x+1)  << "." << endl;
    cout << "El Error Absoluto es:" << Ea << "." << endl;
    cout << "El Error Relativo es:" << Er << "." << endl;
}

main(){
    serieTL A;

    A.lee();
    A.aprox();
    A.Errores();
    A.imprime();
    getchar();
}


float fctr(int n){
	int i;
	float sum = 1;
	for(i = 1; i <= n; ++i){
		sum = sum * (float)i;
	}
    if(n < 0)
		exit(1);
return sum;
}


