/*******************************************************
Escuela Superior de Ingeniería Mecánica y Eléctrica
Alumno: Perez-negrón Rocha David Eugenio
Profesor: Cortés Pérez Alejandro

programa para resolver matrices de n ecuaciones con n
incognitas por el método de GAUSS-JORDAN
*******************************************************/

#include <stdio.h>
#include <stdlib.h>

struct matrix{
float **A, sum;
int i, j, n;

	void readmatrix(void){
	        prinf("Ingresa el numero de ecuaciones:");
        	        scanf("%d",&n);
        	A = (float**)malloc(sizeof(float*)*(n-1));
                	for(i=0; i <=n; i++)
        	A[i] = (float*)malloc(sizeof(float)*n);
                	for(i = 0; i < n; ++i){
                        	for(j = 0; j <= n; ++j){
                                	printf("ingresa el valor [%d,%d]:", (i+1), (j+1));
                                        	scanf("%f", &A[i][j]);
                        	}
                	}
	}
	void resolvgauss(void);
	void printmatrix(void);
	void results(void);
	matrix(void){
        	sum=0.0;
	}

};

void matrix::printmatrix(void){
	for(i = 0; i < n; ++i){
		printf("|");
		for(j = 0; j<=n; ++j){
			printf(" %f ", A[i][j]);
		}
		printf("|\n");
	}
}

void matrix::resolvgauss(void){
float temp, sum;
int k;
    for(i = 0; i < n;++i){
        if(A[i][i] == 0){
            cout << "Sistema Indeterminado..." << endl;
            exit(1);
        }
        for(j = 0; j < n; ++j){
            if(j != i){
                temp = A[j][i];
                for(k = i; k <= n; ++k)
                    A[j][k] = A[j][k] - temp * (A[i][k]/A[i][i]);

            }
        }
    }
    for(i = 0; i < n; ++i){
        temp = A[i][i];
        for(j = 0; j <= n; ++j)
            A[i][j]=(A[i][j]/temp);
    }
}
void matrix::results(void){
    for(i = 0; i < n; ++i)
        cout << "El valor de X" << (i+1) << " es:" << A[i][n] << endl;

}
main(){
    matrix D;
    D.readmatrix();
        cout << endl;
        cout << "la matriz es:" << endl;
    D.printmatrix();
        cout << endl;
    D.resolvgauss();
        cout << endl;
        cout << "la matriz resuelta por GAUSS-JORDAN es:" << endl;
    D.printmatrix();
        cout << endl;
    D.results();
    getchar();
}
