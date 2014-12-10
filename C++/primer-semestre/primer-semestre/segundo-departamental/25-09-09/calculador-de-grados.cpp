#include <iostream>

using namespace std;

main(){
	
	float grados = 5 , fahrenheit;
	
	cout << "Celsius" << '\t' << "fahrenheit" << '\n';
	
	while(grados <= 50){
		
			fahrenheit = (1.8 * grados) + 32; 
		cout << grados << '\t' << fahrenheit << '\n';
			grados++;
	}
	
}