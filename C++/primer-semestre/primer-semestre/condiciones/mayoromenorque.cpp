#include <iostream>
//#include <conio.h>

using namespace std;

main ()
{

int a, b, c;

    cout << "Escribe el valor de a: ";
	cin >> a;
    cout << "Escribe el valor de b: ";
	cin >> b;
    cout << "Escribe el valor de c: ";
	cin >> c;

	if (a > b && a > c){
		
		cout  << "El numero mayor es: " << a << '\n';
		
		if (b > c){
			
			cout << "el numero de enmedio es: " << b << '\n';
			cout << "el numero menor es: " << c << '\n';
		}
		
		else if (c > b){
			
			cout << "el numero de enmedio es: " << c << '\n';
			cout << "el numero menor es: " << b << '\n';
		}
	}

	else if (b > a && b > c){
		
		cout  << "El numero mayor es: " << b << '\n';
		
		if (a > c){
			
			cout << "el numero de enmedio es: " << a << '\n';
			cout << "el numero menor es: " << c << '\n';
		}
		
		else if (c > a){
			
			cout << "el numero de enmedio es: " << c << '\n';
			cout << "el numero menor es: " << a << '\n';
		}
	}

	else if (c > a && c > b){
		
		cout  << "El numero mayor es: " << c << '\n';
		
		if (a > b){
			
			cout << "el numero de enmedio es: " << a << '\n';
			cout << "el numero menor es: " << b<< '\n';
		}
		
		else if (b > a){
			
			cout << "el numero de enmedio es: " << b << '\n';
			cout << "el numero menor es: " << a << '\n';
		}
	}
	
}
