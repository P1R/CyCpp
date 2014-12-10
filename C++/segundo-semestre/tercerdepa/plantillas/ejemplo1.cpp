/*Elaborae una funcion plantilla que busque un númeroi e un arreglo cualquier
tipo y devuelva cuantas veces se encuentra dicha funcion
*/
#include <stdio.h>
#include <iostream>

using namespace std;

template <class tipo>

int busqueda(tipo x, tipo  *A, int n){
 int veces = 0, i;
    for(i = 0; i < n; ++i){
	if(A[i] == x)
	    veces++;
    }
    return veces;
}

main()
{
    int N, i, busca, *ap;
    
    cout << "cuantos elementos?";
	cin >> N;
    ap = new(int[N]);
    cout << "Da los enteros:";
	for(i = 0; i < N; i++)
	    cin >> ap[i];
    cout << "que numero buscas?";
    cin >> busca;
    
    cout << "Este numero esta ";
    cout << busqueda(busca, ap, N);
    cout << " veces\n";
}