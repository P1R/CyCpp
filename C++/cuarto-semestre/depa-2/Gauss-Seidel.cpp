/*******************************************************
Escuela Superior de Ingenier�a Mec�nica y El�ctrica
Alumno: Perez-negr�n Rocha David Eugenio
Profesor: Cort�s P�rez Alejandro

programa para resolver matrices de n ecuaciones con n
incognitas k ciclos por el m�todo de GAUSS-SEIDEL
*******************************************************/
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

class matrix{
float **A;
int i, j;
public:
    void readM(void);
    void printM(void);
    void resolvM-GS(void);
    matrix(void);
};
