#include <iostream>
//#include <conio.h>
float divi(float,float); //declaracion de la funcion

float divi(float x, float y) //definicion de la función
{
float res;
    res = x / y;
    return res;
}

main()		//llamar a la funcion en el main
{

float a, b; //variables locales
using namespace std;

cout<<"dame un numero: ";
    cin>>a;
cout<<"dame otro numero: ";
    cin>>b;
cout<<"la division da: "<<divi(a,b)<<'\n';
//getch();

}