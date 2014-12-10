#include <iostream>
#include <math.h>

using namespace std;

//declarando funciones
void	portreinta(void);
void portreintamarco(void);
void triangulo(void);
void potencia(void);
void incremdecrem45(void);
void incremdecrem100(void);
void calculagrados(void);
void potenciawhile(void);
void promedio(void);
void calificacion(void);
void generador(void); //seccion guia
void calcularaiz(void);
void tarifa(void);
void anio(void);
//Definición de las operaciones

void portreinta(void){
    int cont1, cont2;
    
    for(cont1 = 0; cont1 < 30; cont1++){
    cout << '\n';
	for(cont2 = 0; cont2 < 30; cont2++)
	cout << "*";
    }
    cout << '\n';
}


void portreintamarco(void){
 int contador1, condicion1 = 0, condicion2 = 1, contador2, contador3;
    
    for (contador3 = 1; contador3 <= 3; contador3++){
	cout << '\n';
	for (contador1 = 0; contador1 <= 30 && condicion1 <= 60; contador1++){
	        cout << '*';
		condicion1++;
	    for (contador2 = 1; contador2 <= 28 && condicion1 == 30; contador2++)
		    cout << "\n*                            *";
	    }
	}
}



void triangulo(void){
 	int conta1, conta2, conta3;
	
	for (conta1 = 1; conta1 <= 23; conta1++){
		for (conta2 = -17; conta2 <= conta1; conta2++)
			cout << " ";
		for (conta3 = conta1; conta3 <= 23; conta3++)
			cout << "* ";
			cout << '\n';
	}	
}
	
	




void potencia(void){
	    int contador;
    
    for(contador = 1; contador <=10; contador++){
	cout << "De el numero: " << contador;
	cout << " su raiz cuadrada es: " << sqrt(contador);
	cout << " su cuadrado es: " << pow(contador, 2) << '\n';
    }
}

void incremdecrem45(void){

	int a = 45, b;
	
	b = a + 30;
	
		cout << "a = " << a << '\n';
		cout << "b = " << b << '\n';
		cout << "______________________" << '\n';
		cout << "a = " << ++a << '\n';
		cout << "b = " << --b << '\n';
		cout << "______________________" << '\n';
		cout << "a = " << a++ << '\n';
		cout << "b = " << --b  << '\n';
		cout << "______________________" << '\n';
	
}
void incremdecrem100(void){
		int a = 100, b;
	
	b = a;	
	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
	cout << "______________________" << '\n';
	
	b = a++; 

	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
	cout << "______________________" << '\n';

	cout << "a = " << ++a<< '\n'; 
	cout << "b = " << b << '\n'; 
	cout << "______________________" << '\n';
	
	cout << "a = " << ++a<< '\n'; 
	cout << "b = " << b << '\n'; 
	cout << "______________________" << '\n';
	
	cout << "a = " << ++a<< '\n'; 
	cout << "b = " << b << '\n'; 
	cout << "______________________" << '\n';
		
}

void calculagrados(void){
		float grados = 5 , fahrenheit;
	
	cout << "Celsius" << '\t' << "fahrenheit" << '\n';
	
	while(grados <= 50){
		
			fahrenheit = (1.8 * grados) + 32; 
		cout << grados << '\t' << fahrenheit << '\n';
			grados++;
	}
	
}
void potenciawhile(void){
		int n = 1;

	while (n  <= 10){
		cout << " el numero es: " << n << " su cuadrado es: " << pow(n,2) << " y su cubo es: " << pow(n,3) << '\n';
			n++;
	}

}
void promedio(void){
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
void calificacion(void){
	    float calificacion;

    cout << "Ingresa la calificacion:"; 
	cin >> calificacion;
	
	if (calificacion >= 0 && calificacion <= 5.5)
	    cout << "Reprobado" << '\n';
	else if (calificacion >= 5.6 && calificacion <= 5.9)
	    cout << "Suspenso" << '\n';
	else if (calificacion >= 6.0 && calificacion <= 6.5)
	    cout << "Suficiente" << '\n';
	else if (calificacion >= 6.6 && calificacion <= 7.5)
	    cout << "Regular" << '\n';
	else if (calificacion >= 7.6 && calificacion <= 8.5)
	    cout << "Bien" << '\n';
	else if (calificacion >= 8.6 && calificacion <= 9.5)
	    cout << "Muy Bien" << '\n';
	else if (calificacion >= 9.6 && calificacion <= 10)
	    cout << "Exelente" << '\n';
}

	
void generador(void){ // seccion guia
	    char caracter;
    
    cout << "Introdusca el caracter para Activar el generador: ";
	cin >> caracter;
	
	if (caracter == 'C' || caracter == 'c')
	    cout << "se ha activado el generador de 20 Kw\n";
	else
	    cout << "se ha activado el generador de 50 Kw\n";
}
void calcularaiz(void){
	    double numero, aproxprev = 0, aproxnuev;

    cout << "Introduce el numero: ";
    cin >> numero;
    cout << "Introduce la raiz aproximada: ";
    cin >> aproxprev;
    do{
    aproxprev = ((numero / aproxprev) + aproxprev) / 2;
    cout << aproxprev << '\n';
    }
    while (aproxprev >= 0.00001);
    //cout << aproxprev << '\n';
	/*{
        aproxprev = (((aproxnuev / aproxprev) + aproxprev) /2);
	cout << aproxprev << '\n';
    }*/
}

void tarifa(void){
	    int peso, modelo;

        cout << "\t\tSISTEMA DE TARIFA PARA REGISTRO DE AUTOMOVILES DE NUEVA JERSEY\n\n";
        cout << "Ingrese el modelo del auto: ";
        cin >> modelo;
        cout << "Ingrese el peso del auto en libras: ";
        cin >> peso;
    
	if(modelo <= 1970){
	    if (peso <= 2700)
		cout << "clase 1, tarifa 16.50\n";
	    else if (peso > 2700 && peso < 3800)
		cout << "clase 2, tarifa 25.50\n";
	    else if (peso >= 3800)
		cout << "clase 3, tarifa 46.50\n";
	}
	else if(modelo >= 1971 && modelo <= 1979){
	    if(peso <= 2700)
		cout << "clase 4, tarifa 27.00\n";
	    else if(peso > 2700 && peso < 3800)
	        cout << "clase 5, tarifa 30.50\n";
	    else if(peso >= 3800)
	        cout << "clase 6, tarifa 52.50\n";
	}
	else if(modelo >= 1980){
	    if(peso <= 3500)
		cout << "clase 7, tarifa 19.50\n";
	    else if(peso >= 3500)
		cout << "clase 8, tarifa 52.50\n";
	}
}
    
void anio(void){
	    int year;
    
    cout << "introdusca el aÃ±o: ";
    cin >> year;

    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
	cout << "es un aÃ±o bisiesto\n";
    else
	cout << "no es un aÃ±o bisiesto\n";
}
main()
{
	int opt;
	char salir;
	
	do {
	cout << '\t'  << '\t' <<"PROGRAMAS DEL SEGUNDO DEPARTAMENTAL" << '\n' << '\n';
	
	cout << "El menu es: " << '\n' << "1 figuras con ciclo for" << '\n' <<"2 cuadrado y cubo de numeros con for" << '\n'; 
	cout << "3 incrementos y decrementos" << '\n' << "4 programas con while" << '\n';
	cout << "5 Califica con if anidado" << '\n' << "6 Guia para Examen" << '\n';
	cout << '\n' <<"Seleccione su opcion: ";
	cin >> opt;
	
	switch(opt){
		
		case 1:{
			
			cout << '\t'  << '\t' <<"FIGURAS CON CICLO FOR" << '\n' << '\n';
			cout << "El menu es: " << '\n' << "1 cuadro lleno 30x30" << '\n' << "2 marco 30x30" << '\n' << "3 triangulo abajo" << '\n'; 
			cout << '\n' <<"Seleccione su opcion: ";
			cin >> opt;
		
			switch(opt){
			
				case 1:{
					portreinta();
					break;
				}
				
				case 2:{
					portreintamarco();
					break;
				}
				
				case 3:{
					triangulo();
					break;
				}
				
				default:{
					cout << "opcion incorrecta" << '\n';}
			}
			break;
		}
		
		case 2:{
			potencia();
			break;
		}
		
		
		
		
		case 3:{
			cout << '\t'  << '\t' <<"INCREMENTOS Y DECREMENTOS" << '\n' << '\n';
			cout << "El menu es: " << '\n' << "1 incremento y decremento desde 45" << '\n' << "2 incremento y decremento desde 100" << '\n';
			cout << '\n' <<"Seleccione su opcion: ";
			cin >> opt;
		
			switch(opt){
			
				case 1:{
					incremdecrem45();
					break;
				}
				case 2:{
					incremdecrem100();
					break;
				}
				default:{
					cout << "opcion incorrecta" << '\n';}
				}
				break;
			}
			
		case 4:{
			cout << '\t'  << '\t' <<"PROGRAMAS CON WHILE" << '\n' << '\n';
			cout << "El menu es: " << '\n' << "1 muestra grados C a F" << '\n' << "2 muestra cuadrado y cubo con while" << '\n';
			cout << "3 programa que saca un promedio de calificaciones" << '\n';
			cout << '\n' <<"Seleccione su opcion: ";
			cin >> opt;
		
			switch(opt){
				case 1:{
					calculagrados();
					break;
				}
				case 2:{
					potenciawhile();
					break;
				}
				case 3:{
					promedio();
					break;
				}

			}
			break;	
		}
				
				
		case 5:{
			calificacion();
			break;
		}
		
		case 6:{
			
			cout << '\t'  << '\t' <<"EJERCICIOS DE LA GUIA SEGUNDO DEPARTAMENTAL" << '\n' << '\n';
			cout << "El menu es: " << '\n' << "1 generador" << '\n' << "2 Calcula raiz" << '\n' << "3 Tarifa auto" << '\n'; 
			cout << "4 Tipo de año" << '\n';
			cout << '\n' <<"Seleccione su opcion: ";
			cin >> opt;
		
			switch(opt){
			
				case 1:{
					generador();
					break;
				}
				
				case 2:{
					calcularaiz();
					break;
				}
				
				case 3:{
					tarifa();
					break;
				}
				case 4:{
					anio();
					break;
				}
				
				default:{
					cout << "opcion incorrecta" << '\n';}
			}
			break;
		}
		
		default:{
			cout << "opcion incorrecta" << '\n';}
		
	}
	cout << "Deseas regresar al menu? S/N: ";
	cin >> salir;
	}
while(salir == 'S' || salir == 's' );
}