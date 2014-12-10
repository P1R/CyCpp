#include <iostream>
//#include <conio.h>
//declaración de la función
void area(void);
//definción de la función
void area(void)
{
    int res, r, pi = 3.1416;

using namespace std;

	cout << "Dame el valor de radio: ";
	    cin >> r;
	    res = pi * (r * r);
	cout << "el area de un circulo de radio " << r << " es igual a: " << res << '\n';
}

main()
{
    area();
    //getch();
}