#include <iostream>
#include <math.h>

using namespace std;

main()
{
    int contador;
    
    for(contador = 1; contador <=10; contador++){
	cout << "De el numero: " << contador;
	cout << " su raiz cuadrada es: " << sqrt(contador) << '\n';
    }
}