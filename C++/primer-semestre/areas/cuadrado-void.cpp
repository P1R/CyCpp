#include <iostream>
//#include <conio.h>
//declaración de la función vacia
void area(void);
//definción de la función vacia
void area(void)
{
    int res, l1, l2;
    
    using namespace std;
    
	cout << "Dame el valor de el lado 1: ";
	    cin >> l1;
	cout << "Dame el valor de el lado 2: ";
	    cin >> l2;
	    res = l1 * l2;
	cout << "el area en un triangulo con un lado de " << l1 << " y otro lado de " << l2 << " es igual a: " << res << '\n';
}
//llamando a main
main()
{
    //llamando a la funcion 
    area();
    //getch();
}