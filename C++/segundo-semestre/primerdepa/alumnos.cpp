#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct alumno{
    char nombre[20];
    char matricula[10];
    char grupo[5];
    };

main()
{
    alumno al[35];
    int i, n, op,  x, *ap;
    char busca[20], opb;

    
    do{
    cout << "Cuantos alumnos a ingresar?: ";
	cin >> n;
    }
    while (n > 35 || n < 0);
    
    cin.ignore();
    
    for(i = 0; i < n; ++i){
	cout << "nombre del alumno: ";
	    gets(al[i].nombre);
	cout << "numero de matricula: ";
	    gets(al[i].matricula);
	cout << "grupo: ";
	    gets(al[i].grupo);
	}

    cout << "\tingrese 1 para imprimir lista de alumnos\n";
    cout << "\tingrese 2 para buscar un alumno\n";
    cout << "\tingrese 0 para salir\n" << "opcion:";
    cin >> op;
    
    switch(op)
    {
    case 1:
	{
	cin.ignore(); //importante, pues limpia loas casillas restant
	for(i = 0; i < n; ++i)
	cout << "alumno: " << (al[i].nombre) << " matricula " << (al[i].matricula) << " salon " << (al[i].grupo)<< '\n';
	}
    case 2:
    {
	     cin.ignore();
	cout << "\nindique el tipo de busqueda: \n";
	cout << "a para busqueda por nombre\n";
	cout << "b para busqueda por matricula\n";
	cout << "c para busqueda por grupo\n";
	cout << "opcion: ";
	    cin >> opb;
	    switch(opb){
	    
			case 'a':
			{
			cin.ignore();
		cout << "ingrese el nombre: ";
		gets(busca);
			for(i = 0; i < n; ++i){
				x = strcasecmp(busca,al[i].nombre);
				if(x == 0){
					cout << "alumno: " << (al[i].nombre) << " matricula " << (al[i].matricula) << " salon " << (al[i].grupo)<< '\n';
				break;
				}
			}
			exit(0);
		}
		
			case 'b':
			{
			cin.ignore();
		cout << "ingrese la matricula: ";
		gets(busca);
		for(i = 0; i < n; ++i){
		    x = strcasecmp(busca,al[i].matricula);
		    if(x == 0){
			cout << "alumno: " << (al[i].nombre) << " matricula " << (al[i].matricula) << " salon " << (al[i].grupo)<< '\n';
			break;
			}
		
		}
		exit(0);
		}
		
			case 'c':
			{
			cin.ignore();
		cout << "ingrese el grupo: ";
		gets(busca);
		for(i = 0; i < n; ++i){
		    x = strcasecmp(busca,al[i].grupo);
		    if(x == 0){
			cout << "alumno: " << (al[i].nombre) << " matricula " << (al[i].matricula) << " salon " << (al[i].grupo)<< '\n';
			break;
			}
		
		}
		exit(0);
		}
			default:
			cout << "no existe tal opcion\n";
	
		}
		break;
	}
	case 3:
		{
		cout << "hasta pronto\n";
		exit(0);
	}
	default:
	{
		cout << "no existe tal opcion";
	}
}
}