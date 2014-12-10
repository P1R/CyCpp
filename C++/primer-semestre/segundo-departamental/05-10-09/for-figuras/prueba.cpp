#include <iostream>

using namespace  std;

main()
{
	int conta1, conta2, conta3;
	
	for (conta1 = 1; conta1 <= 23; conta1++){
		for (conta2 = -17; conta2 <= conta1; conta2++)
			cout << " ";
		for (conta3 = conta1; conta3 <= 23; conta3++)
			cout << "* ";
			cout << '\n';
	}
	
}
	
	