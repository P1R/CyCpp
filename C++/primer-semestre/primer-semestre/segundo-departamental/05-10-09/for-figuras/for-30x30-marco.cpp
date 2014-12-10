#include <iostream>

using namespace std;

main()
{
    int contador1, condicion1 = 0, condicion2 = 1, contador2, contador3;
    
    for (contador3 = 1; contador3 <= 3; contador3++){
	cout << '\n';
	for (contador1 = 0; contador1 <= 30 && condicion1 <= 60; contador1++){
	        cout << '*';
		condicion1++;
	    for (contador2 = 1; contador2 <= 28 && condicion1 == 30; contador2++)
		    cout << "\n*                            *";
	    }
	}
}