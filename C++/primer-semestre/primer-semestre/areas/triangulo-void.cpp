#include <iostream>
//#include <conio.h>
//declaración de la función
void area(void);
//definción de la función
void area(void)
{
    int res, b, h;
    
    using namespace std;
    
	cout << "Dame el valor de la base: ";
	    cin >> b;
	cout << "Dame el valor de la altura:";
	    cin >> h;
            res = (b * h) / 2;
	cout << "el area en un triangulo con base " << b << " y con altura " << h << " es igual a: " << res << '\n';
}


main()
{
    area();
    //getch();
}