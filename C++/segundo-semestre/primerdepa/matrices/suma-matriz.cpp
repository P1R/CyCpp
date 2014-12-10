#include <iostream>

    using namespace std;

main()
{
    
    int  A[2][2], B[2][2], C[2][2], i, j;
    
        cout << "ingresa los valores de la matriz A\n";

    for(i = 0; i <= 2; ++i){
	for(j = 0; j <= 2 ; ++j){
	cout << "ingrese la entrada [" << (i+1) << "," << (j+1) << "]";
	    cin >> A[i][j];
	}
    }
    
    
    cout << "ingresa los valores de la matriz B\n";

    for(i = 0; i <= 2; ++i){
	for(j = 0; j <=2 ; ++j){
	cout << "ingrese la entrada [" << (i+1) << "," << (j+1) << "]";
	    cin >> B[i][j];
	}
    }
             //bucle de suma de matrices
    for(i = 0; i <= 2; ++i){
	for(j = 0; j <= 2; ++j){
	    C[i][j] = A[i][j]+B[i][j];
	}
    }
    
    cout << "la suma de las matrices A+B es:\n";
    
	for(i = 0; i <= 2; ++i){
	    cout << "|";
	    for(j = 0; j<= 2; ++j){
	    cout << " " << C[i][j] << " ";
	    }
	    cout << "|\n";
	}
	
}