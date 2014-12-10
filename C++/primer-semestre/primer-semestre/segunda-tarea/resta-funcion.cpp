#include <iostream>
//#include <conio.h>
int resta(int,int); //declaracion de la funcion

int resta(int x, int y) //definicion de la función
{
int res;
    res = x - y;
    return res;
}

main()		//llamar a la funcion en el main
{

int a, b; //variables locales
using namespace std;

cout<<"dame un numero: ";
    cin>>a;
cout<<"dame otro numero: ";
    cin>>b;
cout<<"la resta da: "<<resta(a,b)<<'\n';
//getch();

}