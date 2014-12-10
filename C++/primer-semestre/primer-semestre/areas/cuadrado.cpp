#include <iostream>
//#include <conio.h>
//declaración de la función
int area(int, int);
//definción de la función
int area(int l1, int l2)
{
    int res;
        res = l1 * l2;
    return res;
}

//llamando a main
main()
{
    int l1, l2;

    using namespace std;

	cout << "Dame el valor de el lado 1: ";
	    cin >> l1;
	cout << "Dame el valor de el lado 2: ";
	    cin >> l2;
	cout << "el area en un triangulo con un lado de " << l1 << " y otro lado de " << l2 << " es igual a: " << area(l1, l2) << endl;
    //getch();
}