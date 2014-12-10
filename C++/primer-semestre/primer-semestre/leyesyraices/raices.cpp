#include <iostream>
//#include <conio.h>
#include <math.h>

// este programa calcula la raiz cuadrada y la formula general
using namespace std;

main()
{
	int opcion;
	float num, raiz, a, b, c, x;

	cout << "para calcular la raiz cuadrada de un numero ingresa 1" << '\n';
	cout << "para calcular la formula general ingresa 2" << '\n';
		cin >> opcion;

   	if (opcion == 1){

		cout << "haz ingresado a la seccion para calcular raiz cuadrada";
		cout << '\n' << "ingresa el el valor a calcular: ";
			cin >> num;

			raiz = sqrt(num);
		
		cout  << "la raiz de " << num << " es igual a " << raiz << '\n';
		
		}
	else if (opcion == 2){
			
		cout << "haz ingresado a la seccion para calcular la formula general";
		cout << '\n' << "ingresa el valor de A: ";
			cin >> a;
		cout << '\n' << "ingresa el valor de B: ";
			cin >> b;
		cout << '\n' << "ingresa el valor de C: ";
			cin >> c;
		
			x =  (-b+sqrt((b*b)-((a*c)+(a*c)+(a*c)+(a*c))))/(a+a);
		
		cout  << "El valor de la Ecuacion positiva es: " <<  x << '\n';
		
			x = (-b-sqrt((b*b)-((a*c)+(a*c)+(a*c)+(a*c))))/(a+a);
		
		cout << "El valor de la Ecuacion Negativa es: " << x << '\n';
			
		}
}

