#include <iostream.h>
#include <math.h>
#include <conio.h>
#define k 9000000000

//using namespace std;

main()
{

	float Vol, Int, Res;
	float C1, C2, D, F, R2;
	int opc;

		cout << "El siguiente programa sirve para calcular la ley de ohm o la ley de coulomb" << '\n' << " ingresa su numero correspondiente: " << '\n';
		cout << "1 para ley de ohm" << '\t' << "2 para ley de coulomb" << '\n' << "opcion: ";
			cin >> opc;

		if (opc == 1){

			cout << "Servicio para calcular la ley de ohm; favor de ingresar los datos e ingrese 0 en la incognita a resolver" << '\n';
			cout << "Valor de la Resistencia: ";
				cin >> Res;
			cout << "Valor de la Intensidad: ";
				cin >> Int;
			cout << "Valor de el Voltaje: ";
				cin >> Vol;

			if (Res == 0){

				Res =  Vol / Int;

				cout << "La Resistencia tiene un valor de: " << Res << " de un Voltaje de " << Vol << " y la Intensidad de  " << Int << '\n';
			}

			else if (Vol == 0){

				Vol = Res * Int;

				cout << "La Resistencia tiene un valor de: " << Res << " de un Voltaje de " << Vol << " y la Intensidad de  " << Int << '\n';
			}

			else if (Int == 0){

				Int = Vol / Res;

				cout << "La Resistencia tiene un valor de: " << Res << " de un Voltaje de " << Vol << " y la Intensidad de  " << Int << '\n';
			}

			else
				cout << "ERROR!!! " << '\n' <<"    lea las instrucciones ;)" << '\n';
			        getch();

		}


		else if (opc == 2){

			cout << "Servicio para calcular la ley de coulomb; favor de ingresar los datos e ingrese 0 en la incognita a resolver" << '\n';
			cout << "Valor de la Carga 1: ";
				cin >> C1;
			cout << "Valor de la Carga 2: ";
				cin >> C2;
			cout << "Valor de la Fuerza: ";
				cin >> F;
			cout << "Valor de la Distancia: ";
				cin >> D;

			if (F == 0){

         		 F = k * ((C1 * C2) / (D * D));
         	cout << "La Fuerza tiene un valor de: " << F << " cuando la carga 1 es igual a: " << C1 << ", la carga 2 es igual a: " << C2 << " y la Distancia es igual a: " << D << '\n';

			}

         else if (D == 0){

         		 D = sqrt((C1 * C2) / (F * k));

         	cout << "La Distancia tiene un valor de: " << D << " cuando la carga 1 es igual a: " << C1 << ", la carga 2 es igual a: " << C2 << " y la Fuerza es igual a: " << F << '\n';

			}

         else if (C1 == 0){

      			C1 = ((F * k) / (C2 * (D * D)));

         	cout << "La  Carga 1 tiene un valor de: " << C1 << " cuando la Distancia es igual a: " << D << ", la carga 2 es igual a: " << C2 << " y la Fuerza es igual a: " << F << '\n';

			}

         else if (C2 == 0){

         		C2 = ((F * k) / (C1 * (D * D)));

         	cout << "La  Carga 2 tiene un valor de: " << C2 << " cuando la Distancia es igual a: " << D << ", la carga 1 es igual a: " << C1 << " y la Fuerza es igual a: " << F << '\n';

			}

		}
      getch();
}