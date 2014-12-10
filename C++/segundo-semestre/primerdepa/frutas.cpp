#include <stdio.h>
#include <iostream>
#include <string.h>
//#include <cstring>
using namespace std;

struct fruta{
    char nombre[10];
    char color[10];
    };
    
main()
{
    fruta A[20];
    int i, n, x;
    char op[3]={'s','i','\0'}, res[3], busca[10];
    
    do{
	//clrscr();
	cout << "Cuantos quieres?";
	    cin >> n;
      }
      while (n > 20 || n < 0);
      
     cin.ignore();
     
      for(i = 0; i < n; ++i){
    cout << "nombre de la fruta: ";
	gets(A[i].nombre);
    cout << "color de la fruta: ";
	gets(A[i].color);
	}
	    //clrscr();
	    
	for(i = 0; i < n; ++i)
	{
	    cout << "nombre: ";
		puts(A[i].nombre);
	    cout << '\n';
	    cout << "color: ";
	    puts(A[i].color);
	    cout << '\n' << '\n';
	}
	cout << "Quieres buscar una fruta? ";
	    gets(res);
	    //strlwr(op);
	x = strcasecmp(res,op);

	if(x == 0){
	 cout << "Que fruta buscas?";
		gets(busca);
		for(i = 0; i < n; ++i){
		x = strcasecmp(busca,A[i].nombre);
		    if (x==0){
			cout << "La fruta: ";
			puts(busca);
			cout << "tiene el color: ";
			puts(A[i].color);
			break;
		    }
		}
	}
	else
	    cout << "hasta pronto\n";
} 
	
    