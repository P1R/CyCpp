#include <iostream>

using namespace std;

main()
{

    double numero, aproxprev = 0, aproxnuev;

    cout << "Introduce el numero: ";
    cin >> numero;
    cout << "Introduce la raiz aproximada: ";
    cin >> aproxprev;
    do{
    aproxprev = ((numero / aproxprev) + aproxprev) / 2;
    cout << aproxprev << '\n';
    }
    while (aproxprev >= 0.00001);
    //cout << aproxprev << '\n';
	/*{
        aproxprev = (((aproxnuev / aproxprev) + aproxprev) /2);
	cout << aproxprev << '\n';
    }*/
}