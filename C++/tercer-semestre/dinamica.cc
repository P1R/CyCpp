#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

struct escuela{
    string nom_alumno;
    string boleta;
    float prom1;
};

    escuela esime;
    escuela esimes;
    escuela upita;
    escuela upitas;

int main()
{
    int a;
    char b;
    float prom1, promp, media;

    cout << "tamaño de la estructura escuela=" << sizeof(escuela) << endl;
    cout << "    \n DATOS DEL ALUMNO ESIME:\n";
    cout << "Ingresa el nombre del alumno 1:";
	cin >> esime.nom_alumno;
    cout << "Introduzca numero de boleta:";
	cin >> esime.boleta;
    cout << "Introduzca el promedio del alumno:";
	cin >> esime.prom1;
    cout << endl << endl;
    
    cout << "Ingresa el nombre del alumno 2:";
	cin >> esimes.nom_alumno;
    cout << "Introduzca numero de boleta:";
	cin >> esimes.boleta;
    cout << "Introdusca el promedio del alumno:";
	cin >> esimes.prom1;
    cout << endl << endl;
    
    cout << "   DATOS DEL ALUMNO UPIITA:\n";
    
    cout << "Ingresa el nombre del alumno 1:";
	cin >> upita.nom_alumno;
    cout << "Introduzca numero de boleta:";
	cin >> upita.boleta;
    cout << "Introdusca el promedio del alumno:";
	cin >> upita.prom1;
    cout << endl << endl;

    cout << "Ingresa el nombre del alumno 2:";
	cin >> upitas.nom_alumno;
    cout << "Introduzca numero de boleta:";
	cin >> upitas.boleta;
    cout << "Introdusca el promedio del alumno:";
	cin >> upitas.prom1;
    cout << endl << endl;
    
    promp = (esime.prom1 + esimes.prom1) / 2;
    
    prom1 = (upita.prom1 + upitas.prom1) / 2;
    
    system("clear");
    
    cout << "\n el promedio de esime es:";
	cout << promp;
    cout << "\n el primedio de upiita es:";
	cout << prom1;

    cout << "\n calculo de la media de alumnos de esime y upiita es:";
	media = ((esimes.prom1 + esime.prom1 + upita.prom1 + upitas.prom1) / 4);
    cout << media;
    
    cout << "\n\n si deseas ver los datos de los alumnos de esime ingresa 1";
    cout << "\n\n si deseas ver los datos de los alumnos de upiita ingresa 2";
    cout << "\nopcion:";
	cin >> a;
    if(a == 1){
	cout << "datos de esime" << endl;
	
	cout << "el nombre del alumno 1 es:";
	cout << esime.nom_alumno;
	cout << "\n su boleta es:";
	cout << esime.boleta << endl;

	cout << "\nel nombre del alumno 2 es:";
	cout << esimes.nom_alumno;
	cout << "\n su boleta es:";
	cout << esimes.boleta << endl;
	}
    else if (a == 2){
	cout << "\n\n datos de alumnos de upiita" << endl;
	
	cout << "el nombre del alumno 1 es:";
	cout << upita.nom_alumno;
	cout << "\n su boleta es:";
	cout << upita.boleta;
	
	
	cout << "\nel nombre del alumno 2 es:";
	cout << upitas.nom_alumno;
	cout << "\n su boleta es:";
	cout << upitas.boleta << endl;
    }
    else
	cout << "\n esa opcion no es correcta" << endl;
    return(0);
}