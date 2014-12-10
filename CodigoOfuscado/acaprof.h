#include <iostream>

using namespace std;

int acaprof(void);

int acaprof(void){
    
    char op = '\0', a, b, c ,d;
    int prom = 0;
    
    cout << "\t\tCuestionario de nivel Academico Prodesional\n";
    
    cout << "Que porcentaje de ingles domina?\n";
    cout << "a)10%\tb)80%\tc)50%\td)65%\n";
    cout << "Resultado:";
	cin >> op;
    if(op == 'b'){
	++prom;
	op='\0';
    }	
    cout << "Cual es su grado maximo de estudios?\n";
    cout << "a)Bachillerato\tb)Tecnico Superior Universitario\tc)Carrera Tecnica\td)Licenciatura\n";
    cout << "Resultado:";
	cin >> op;
    if(op == 'd'){
	++prom;
	op='\0';
    }

    cout << "Cual fue su promedio global al terminar sus estudios?\n";
    cout << "a)Mayor a 8\tb)De 7.5 a 8\tc)De 7 a 7.5\td)De 6 a 6.5\n";
    cout << "Resultado:";
	cin >> op;
    if(op == 'a'){
	++prom;
	op='\0';
    }
    
    cout << "En que institucion realizo sus estudios?\n";
    cout << "a)UVM\tb)UNAM\tc)INSTITUTO POLITECNICO NACIONAL\td)UAM\n";
    cout << "Resultado:";
	cin >> op;
    if(op == 'c'){
	++prom;
	op='\0';
    }
    
    cout << "Cuantos años tiene de experiencia en el campo?\n";
    cout << "a)2\tb)3\tc)5 o mas\td)1\n";
    cout << "Resultado:";
	cin >> op;
    if(op == 'c'){
	++prom;
	op='\0';
    }
    return(prom);
}