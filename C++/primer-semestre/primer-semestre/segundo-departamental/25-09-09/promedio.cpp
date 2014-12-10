#include <iostream>

using namespace std;
main()
{
    float  promedio = 0, calificacion = 1;
    int contador = 1;
    
    while(contador <= 10){
	cout << "ingresa la calificacion " << contador << " :";
	    cin >> calificacion;
	    if(calificacion <=10 && calificacion >=0){
		promedio = promedio + calificacion;
		    ++contador;
	    }
	    else 
		cout << "la calificacion debe de ser de 0 a 10" << '\n';
	}
	    promedio = (promedio / 10);
	    
	cout << "el promedio de calificaciones es " << promedio << '\n';
}