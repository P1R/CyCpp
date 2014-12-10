#include <iostream>

using namespace std;

main()
{

    int peso, modelo;

        cout << "\t\tSISTEMA DE TARIFA PARA REGISTRO DE AUTOMOVILES DE NUEVA JERSEY\n\n";
        cout << "Ingrese el modelo del auto: ";
        cin >> modelo;
        cout << "Ingrese el peso del auto en libras: ";
        cin >> peso;
    
	if(modelo <= 1970){
	    if (peso <= 2700)
		cout << "clase 1, tarifa 16.50\n";
	    else if (peso > 2700 && peso < 3800)
		cout << "clase 2, tarifa 25.50\n";
	    else if (peso >= 3800)
		cout << "clase 3, tarifa 46.50\n";
	}
	else if(modelo >= 1971 && modelo <= 1979){
	    if(peso <= 2700)
		cout << "clase 4, tarifa 27.00\n";
	    else if(peso > 2700 && peso < 3800)
	        cout << "clase 5, tarifa 30.50\n";
	    else if(peso >= 3800)
	        cout << "clase 6, tarifa 52.50\n";
	}
	else if(modelo >= 1980){
	    if(peso <= 3500)
		cout << "clase 7, tarifa 19.50\n";
	    else if(peso >= 3500)
		cout << "clase 8, tarifa 52.50\n";
	}
}
    