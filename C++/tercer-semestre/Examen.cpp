#include <iostream>
#include <cstdlib>
//#include <conio.h>

using namespace std;

struct ciudadano{
 char nombre[30], sexo, curp[20], ocup[20];
 int edad;
};

main()
{
 ciudadano *ap;
 int i, n, op;

    system("clear");

do{
    cout << "1.-Ingresar Datos "<<endl;
    cout << "2.-Imprimir datos"<<endl;
    cout << "3.-salir" << endl;
        cin >> op;

    switch(op){
	case 1:
	    cout << "Cuantos ciudadanos a registrar:";
		cin >> n;
	    ap = new(ciudadano[n]);

	    for(i = 0; i < n; ++i){
		cin.ignore();
		cout << "ingrese el nombre:";
		    cin.getline(ap[i].nombre,30,'\n');
		cout << "ingrese edad:";
		    cin >> ap[i].edad;
		cout << "Ingrese sexo:";
		    cin >> ap[i].sexo;
		cin.ignore();
		cout << "Ingrese curp:";
		    cin.getline(ap[i].curp,20,'\n');
		cin.ignore();
		cout << "Ingrese ocupacion:";
		    cin.getline(ap[i].ocup,20,'\n');
        	system("clear");
            }
	    break;

	case 2:
	    for(i = 0; i < n; ++i){
		if(ap[i].sexo == 'm'){
		    cout << "LOS MACHOS SON:" << endl;
         	    cout << "el nombre es: " << ap[i].nombre << " La Edad es:" << ap[i].edad << "El curp es:" << ap[i].ocup << endl;
        	}
        	else{
		    cout << "LAS MUJERES SON:" << endl;
		    cout << "el nombre es: " << ap[i].nombre << " La Edad es:" << ap[i].edad << "El curp es:" << ap[i].ocup << endl;
        	}
	    }
	    break;
    
	default:
	    cout << "error";
	    break;
    }

} while(op != 3);

}
