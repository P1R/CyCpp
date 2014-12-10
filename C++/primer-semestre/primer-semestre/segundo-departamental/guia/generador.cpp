#include <iostream>

using namespace std;

main()
{
    char caracter;
    
    cout << "Introdusca el caracter para Activar el generador: ";
	cin >> caracter;
	
	if (caracter == 'C' || caracter == 'c')
	    cout << "se ha activado el generador de 20 Kw\n";
	else
	    cout << "se ha activado el generador de 50 Kw\n";
}