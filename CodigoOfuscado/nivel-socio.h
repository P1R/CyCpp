#include <iostream>

using namespace std;

int nivsoc(void);

int nivsoc(void){
    
    char op = '\0', a, b, c ,d;
    int prom = 0;
    
    cout << "\t\tCuestionario socio-cultural\n";
    
    cout << "Quien fue el escritor de los miserables?\n";
    cout << "a)Gustave Flaubert\tb)Victor Hugo\tc)Chapo Guzman\td)Bram storker\n";
    cout << "Respuesta:";
	cin >> op;
    if(op == 'b'){
	++prom;
	op='\0';
    }	
    cout << "Cual es la particula fundamental mas pequeña de la materia?\n";
    cout << "a)proton\tb)neutron\tc)electron\td)quark\n";
    cout << "Respuesta:";
	cin >> op;
    if(op == 'd'){
	++prom;
	op='\0';
    }

    cout << "En que año se dieron las revoluciones obreras mas importantes inspiradas por el manifiesto comunista en Europa?\n";
    cout << "a)1848\tb)1865\tc)300 AC\td)2010\n";
    cout << "Respuesta:";
	cin >> op;
    if(op == 'a'){
	++prom;
	op='\0';
    }
    
    cout << "Quien fue el primer presidente de Mexico?\n";
    cout << "a)Agustin de Iturbide\tb)Felipe Calderon\tc)Guadalupe Victoria\td)Che Guevara\n";
    cout << "Respuesta:";	
	cin >> op;
    if(op ==  'c'){
	++prom;
	op='\0';
    }
    
    cout << "Cual es la institucion encargada de regular las telecomunicaciones en Mexico?\n";
    cout << "a)Iglesia Catolica\tb)TELEVISA\tc)Cofetel\td)S.C.T.\n";
    cout << "Respuesta:";
	cin >> op;
    if(op == 'c'){
	++prom;
	op='\0';
    }  
    return(prom);
}