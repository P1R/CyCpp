#include <iostream>
//#include <conio.h>
//declaración de la función
int area(int, int);
//definción de la función
int area(int b, int h)
{
    int res;
        res = b * h;
    return res;
}


main()
{
    int b, h;

    using namespace std;

	cout << "Dame el valor de la base: ";
	    cin >> b;
	cout << "Dame el valor de la altura:";
	    cin >> h;
	cout << "el area en un rectangulo con base " << b << " y con altura " << h << " es igual a: " << area(b, h) << '\n';
    //getch();
}