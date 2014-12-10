/*******************************************************
Escuela Superior de Ingeniería Mecánica y Eléctrica
Alumno: Perez-negrón Rocha David Eugenio
Profesor: Cortés Pérez Alejandro

programa para resolver matrices de n ecuaciones con n
incognitas k ciclos por el método de GAUSS-SEIDEL
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
