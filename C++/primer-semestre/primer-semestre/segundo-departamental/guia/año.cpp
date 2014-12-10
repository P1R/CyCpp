#include <iostream>

using namespace std;

main()
{
    int year;
    
    cout << "introdusca el año: ";
    cin >> year;

    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
	cout << "es un año bisiesto\n";
    else
	cout << "no es un año bisiesto\n";
}