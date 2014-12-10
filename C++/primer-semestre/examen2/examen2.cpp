#include <iostream>

using namespace std;


    void numero(void){
	int n;
	cout << "ingresa un numero: ";
	cin >> n;
	
	    if(n == 0)
		cout << "el numero es 0\n";
	    else if(n < 0)
		cout << "el numero es negativo\n";
	    else if(n > 0)
		cout << "el numero es positivo\n";
    }
    
    int figura(int x){
	    
	int  i, j;
	
	for(j = 1; j <= x; j++ ){
	    cout << '\n';

	    for (i = j; i <= x; i++)
		cout << i;
	}
    
    }


main()
{
    int opcion, x;
    do{
    cout << "\t\tOprime el numero del programa que quieras ejecutar:\n";
    cout << "1.- numeros\n";
    cout << "2.- figura\n";
    cout << "3.- salir\n";
    cout << "opcion: ";
	cin >> opcion;
    
	if (opcion == 1)
		numero();
	else if (opcion == 2){
		cout << "indica el valor de x: ";
			cin >> x;
			figura(x);
	}
    }
    while(opcion != 3);
}
