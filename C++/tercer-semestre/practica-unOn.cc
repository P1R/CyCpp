/*
Perez-negron Rocha David Eugenio
Ayal Quintana Alonso Alvaro
Grupo	­3cm8
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#define salmin	8.93

using namespace std;

union empleados{
    int ID;
    float laborado;
};

void limpia(empleados);

double calc_neto(empleados);

int main()
{
    int i;
    double pago_neto;
    empleados Emp[3];
    
    for(i = 0; i <= 2; ++i){
    cout << "ingresa el ID del usuario" << (i+1) << ":";
	cin >> Emp[i].ID;
	
    cout << setw(10)
	 << setiosflags(ios::fixed)
	 << setiosflags(ios::showpoint)
	 << setprecision(2);

    cout << "Almacenando datos del empleado:" << Emp[i].ID << "..." << endl;
    limpia(Emp[i]);
    cout << "ingresa el numero de horas laboradas por este empleado:";
	cin >> Emp[i].laborado;
	    pago_neto=calc_neto(Emp[i]);

    cout << "el pago neto para el empleado es $" << pago_neto << endl;
    }

    return 0;
}

double calc_neto(empleados A)
{
return(salmin * A.laborado);
}
void limpia(empleados B){
    B.ID = 0;
    B.laborado = 0;
}