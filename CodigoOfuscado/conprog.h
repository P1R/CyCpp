#include <iostream>

using namespace std;

int progcon(void);

int progcon(void){
    
    char op = '\0', a, b, c ,d;
    int prom = 0;
    
    cout << "\t\tCuestionario de conocimientos basicos de programacion?\n";
    
    cout << "Como se eliminan los elementos de una cola?\n";
    cout << "a)De atras hacia adelante\tb)Del frente y se insertan al final\tc)No se puede eliminar\td)Con un delete\n";
    cout << "Respuesta:";
	cin >> op;
    if(op == 'b'){
	prom++;
    }	
    cout << "Como se declaran las variables enteras?\n";
    cout << "a)char\tb)float\tc)string\td)int\n";
    cout << "Respuesta:";
	cin >> op;
    if(op == 'd'){
	prom++;
    }

    cout << "Como se puede accesar a variables de un objeto a otro?\n";
    cout << "a)Por medio del especificador de acceso\tb)Una funcion con diferentes parametros\tc)Mandar llamar a la variable\td)No se puede\n";
    cout << "Respuesta:";
	cin >> op;
    if(op == 'a'){
	prom++;
    }
    
    cout << "Que representacion de arboles binarios es preferible?\n";
    cout << "a)Con manzanas\tb)Con memoria secuencial\tc)No hay respuesta general a esta pregunta\td)Con representacion ligada\n";
    cout << "Respuesta:";
	cin >> op;
    if(op == 'c'){
	prom++;
    }
    
    cout << "Quien fue el creador del proyecto GNU?\n";
    cout << "a)Bill Gates\tb)Linus Trovalts\tc)Richard Stallman\td)Pancho Pantera\n";
    cout << "Respuesta:";
	cin >> op;
    if(op == 'c'){
	prom++;
    }
    return(prom);
}