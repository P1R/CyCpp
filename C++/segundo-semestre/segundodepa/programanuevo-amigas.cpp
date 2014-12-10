#include <iostream>

using namespace std;

class matriz{
  float a[4][4];
  
  public:
  matriz();
  void leer_datos();
  void imprimir_datos();
  friend matriz suma_matrices (matriz &, matriz &);
};

matriz suma_matrices(matriz& suma1, matriz& suma2){
    matriz s;
    int i, j;
    for(i = 0; i < 4; ++i) {
	for(j = i; i < 4; ++j)
	    s.a[i][j] = suma1.a[i][j]  + suma2.a[i][j];
	}
	return s;
}

main(){
    matriz a,b,c;
    cout << "da la primera matriz\n";
    a.leer_datos();
    cout << "da la segunda \n";
    b.leer_datos();
    c = suma_matrices(a,b);
    cout << "la suma es: \n";
    c.imprimir_datos();
}