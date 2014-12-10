/*
Perez-negron Rocha David Eugenio
Ayal Quintana Alonso Alvaro
Grupo­3cm8
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#define salmin	8.93

using namespace std;

struct empleados{
    int ID;
    float salario, laborado;
    empleados();
};
empleados::empleados(){
    salario = salmin;
}

double calc_neto(empleados);

int main()
{
    int i;
    double pago_neto;
    empleados Emp[3];
    
    for(i = 0; i <= 2; ++i){
    cout << "ingresa el ID del usuario" << (i+1) << ":";
	cin >> Emp[i].ID;
    cout << "ingresa el numero de horas laboradas:";
	cin >> Emp[i].laborado;
    }
    
    for(i = 0; i <= 2; ++i){
    pago_neto=calc_neto(Emp[i]);
    
    cout << setw(10)
	 << setiosflags(ios::fixed)
	 << setiosflags(ios::showpoint)
	 << setprecision(2);
	
    cout << "El pago neto para el empleado:" << Emp[i].ID 
	 << " es $" << pago_neto << endl;
    }

    return 0;
}

double calc_neto(empleados A)
{
return(A.salario * A.laborado);
}