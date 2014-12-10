#include <iostream>
using namespace std;

main()
{

    float calificacion;

    cout << "Ingresa la calificacion:"; 
	cin >> calificacion;
	
	if (calificacion >= 0 && calificacion <= 5.5)
	    cout << "Reprobado" << '\n';
	if (calificacion >= 5.6 && calificacion <= 5.9)
	    cout << "Suspenso" << '\n';
	if (calificacion >= 6.0 && calificacion <= 6.5)
	    cout << "Suficiente" << '\n';
	if (calificacion >= 6.6 && calificacion <= 7.5)
	    cout << "Regular" << '\n';
	if (calificacion >= 7.6 && calificacion <= 8.5)
	    cout << "Bien" << '\n';
	if (calificacion >= 8.6 && calificacion <= 9.5)
	    cout << "Muy Bien" << '\n';
	if (calificacion >= 9.6 && calificacion <= 10)
	    cout << "Exelente" << '\n';
}

	