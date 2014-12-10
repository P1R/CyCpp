#include <iostream>
#include <string>
//#include <conio.h>
//#include <dos.h>
#include <stdio.h>

using namespace std;

class persona{
    protected:
    char nombre[30];
    int edad;
    public:
    persona(char*, int);
    };

    persona::persona(char* N="", int E=0)
        {
        strcpy(nombre, N);
        edad=E;
        }

class direccion{
    protected:
    char calle[30];
    char numero[10];
    char colonia[20];
    public:
    direccion(char*,char*, char*);
    };

    direccion::direccion(char* C="", char* Num="", char* Col="")
    {

    strcpy(calle,C);
        strcpy(numero,Num);
            strcpy(colonia, Col);
    }


class empleado: public persona, public direccion
{
private:
float sueldo;
int antiguedad;

public:
empleado(char*, int, char*, char*, char*, float, int);
friend ostream& operator <<(ostream&, const empleado&);
friend istream& operator>>(istream&, empleado&);

};

empleado::empleado(char* N="", int E=0, char* C="", char* Num="", char* Col="", float S=0, int Ant=0):
persona(N, E),direccion(C, Num,Col){
sueldo=S;
antiguedad= Ant;
}

ostream& operator <<(ostream&  Cout , const empleado& imp){
Cout<<"Nombre: "<<endl;
puts(imp.nombre);
Cout<<endl<<"Edad: "<<endl;
Cout<<imp.edad;
Cout<<endl<<"Dirección"<<endl;
Cout<<"Calle ";
puts(imp.calle);
cout<<endl<<" ";
puts(imp.numero);
Cout<<endl<<"Colonia ";
puts(imp.colonia);
Cout<<endl<<"Sueldo: ";
Cout<<imp.sueldo;
Cout<<endl<<"Antiguedad: ";
Cout<<imp.antiguedad<<endl;
return Cout;
}

istream& operator>>(istream& Cin, empleado& le){
cout<<"Ingrese Nombre"<<endl;
gets(le.nombre);
cout<<"Ingrese Edad"<<endl;
Cin>>le.edad;
cout<<"Ingrese Calle"<<endl;
gets(le.calle);
cout<<"Ingrese Numero"<<endl;
gets(le.numero);
cout<<"Ingrese Colonia"<<endl;
gets(le.colonia);
 cout<<"Ingrese Sueldo"<<endl;
Cin>>le.sueldo;
cout<<"Ingrese Antiguedad"<<endl;
Cin>>le.antiguedad;

return Cin;
}



void main()
{

int dato,i;
empleado* emp;
clrscr();
gotoxy(35,25);
cout<<"© 2010 Deme Ese Dos, Reelcorp Coporation."<<endl;

getch();
clrscr();
cout<<"Cuantos pobres va a registar?"<<endl;
cin>>dato;

cout<<dato;

cout<<"\nEspere\n";
sleep(2);
emp= new(empleado[dato]);


clrscr();


for (i=0;i<dato;i++)
	{
   cout<<"Trabajador "<<(i+1)<<endl;
	 cin>>emp[i];
   }

clrscr();

cout<<"\nLos datos ingresados son: \n"<<endl;

for (i=0;i<dato;i++)
  {
  cout<<"Trabajador "<<(i+1)<<endl;
    cout<<emp[i];
    cout<<"\n\n";
  }
getch();
}
