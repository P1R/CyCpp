#include <iostream>

using namespace std;

main()
{

	int a = 10, b;
	
	b = a++; // asignamos posincremento en 1 a b desde a
	
	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
	cout << "______________________" << '\n';
	
	b = ++a; // asignamos preincremento en 1 a b desde a

	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
	cout << "______________________" << '\n';

	cout << "a = " << a++ << '\n'; // se imprime primero la variable y luego el posincremento
	cout << "a = " << ++a << '\n'; // se le asigna el incremento en uno primero, por ser preincremento y se imprime a
	cout << "______________________" << '\n';
	
	
}