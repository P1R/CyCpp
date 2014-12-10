#include <iostream>

using namespace std;

main()
{

	int a = 100, b;
	
	b = a;	
	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
	cout << "______________________" << '\n';
	
	b = a++; 

	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
	cout << "______________________" << '\n';

	cout << "a = " << ++a<< '\n'; 
	cout << "b = " << b << '\n'; 
	cout << "______________________" << '\n';
	
	cout << "a = " << ++a<< '\n'; 
	cout << "b = " << b << '\n'; 
	cout << "______________________" << '\n';
	
	cout << "a = " << ++a<< '\n'; 
	cout << "b = " << b << '\n'; 
	cout << "______________________" << '\n';
		
}