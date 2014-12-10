#include <iostream>
#include <cstdlib>

using namespace std;

class matrix{
    float **A, *X, sum;
    int i, j, n;

    public:

void readmatrix(void);
void resolvgauss(void);
void printmatrix(void);
void results(void);
matrix();

};
matrix::matrix(){
 sum=0.0;
}

void matrix::readmatrix(void){
    cout << "Ingresa el tamanio de la matriz:";
        cin >> n;
    X = (float*)malloc(sizeof(float)*n);
    for(i = 0; i < n; ++i)
	X[i] = 0;
    A = (float**)malloc(sizeof(float*)*(n-1));
    //A new((float*)*(n-1))
    for(i=0; i <=n; ++i)
        A[i] = (float*)malloc(sizeof(float)*n);
    for(i = 0; i < n; ++i){
        for(j = 0; j <= n; ++j){
            cout << "ingresa el valor [" << (i+1) << "," << (j+1) << "]:";
                cin >> A[i][j];
        }
    }
}

void matrix::printmatrix(void){
    cout << "la matriz es:" << endl;
    for(i = 0; i < n; ++i){
        cout << "|";
        for(j = 0; j<=n; ++j){
           cout << " " << A[i][j] << " ";
        }
        cout << "|" <<endl;
    }
}
void matrix::resolvgauss(){
    float aux, sum;
    int k;
    for(i = 0; i < n;++i){
        if(A[i][i] == 0){
            cout << "Sistema Indeterminado..." << endl;
            exit(1);

        }
        for(j = (i+1); j < n; ++j){
            aux = A[i][j];
            for(k = i; k <= n; ++k)
                A[j][k] = A[i][k]-(aux*A[i][k]/A[i][i]);
        }
    }

    for(i = (n-1); i >= 0; --i){
        sum = 0.0;
        for(j = (i+1); j < n; ++j)
            sum += A[i][j]*X[j];
	sum /= A[i][i];
	X[i] =  (A[i][n] / A[i][i]) - sum;
    }
}
void matrix::results(void){
    for(i = 0; i < n; ++i)
        cout << "El valor de X" << (i+1) << " es:" << A[i][n] << endl;
}

main(){
    matrix D;
    D.readmatrix();
    D.printmatrix();
    D.resolvgauss();
    D.printmatrix();
    D.results();
}
