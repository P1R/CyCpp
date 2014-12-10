#include <iostream>
//#include <conio.h>
int suma(int,int); //declaracion de la funcion

int suma(int x, int y) //definicion de la función
{
int res;
    res = x + y;
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
cout<<"la suma da: "<<suma(a,b)<<'\n';
//getch();

}