#include <iostream>

using namespace std;

main()
{
    int x, i, j;
    
    cout << "indica el valor de x: ";
	cin >> x;
	
	for(j = 1; j <= x; j++ ){
	    cout << '\n';

	    for (i = j; i <= x; i++)
		cout << i;
	}
}