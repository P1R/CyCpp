#include <iostream>

using namespace std;

main()
{
    int decremento, incremento, saltos;
    
    for(saltos = 1; saltos <= 5; saltos++){
	    cout << '\n';
	for(decremento = 7; decremento <= 7; decremento++){
		cout << " ";
		for(incremento = 1; incremento <= 15 && decremento <= 7; incremento += 2)
			cout << "*";
	    }
	}

}