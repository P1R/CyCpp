#include <iostream>
//#include <conio.h>

using namespace std;

main()
{
 char nombre[10];
 int i;

    for(i = 0; i <= 10; i++)
	nombre[i] = ' ';

  cout << "escribe tu nombre: ";
  cin.getline(nombre, 10, '\n');
    
    cout << "Hola ";
    
 for( i = 0; i <= 10; i++)
      cout << nombre[i];
    
 // getch();
}

