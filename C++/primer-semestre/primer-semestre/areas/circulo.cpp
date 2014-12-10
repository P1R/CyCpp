#include <iostream>
//#include <conio.h>
//declaración de la función
int area(int, int);
//definción de la función
int area(int pi, int r)
{
    int res;
        res = pi * (r * r);
    return res;
}


main()
{
    int pi = 3.1416, r;

    using namespace std;

	cout << "Dame el valor de radio: ";
	    cin >> r;
	cout << "el area de un circulo de radio " << r << " es igual a: " << area(pi, r) << endl;
    //getch();
}