#include <iostream.h>
#include <string.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>

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
void lector_de_datos();
void impresor();
};

empleado::empleado(char* N="", int E=0, char* C="", char* Num="", char* Col="", float S=0, int Ant=0):
persona(N, E),direccion(C, Num,Col){
sueldo=S;
antiguedad= Ant;
}

ostream& operator <<(ostream&  Cout , const empleado& imp){
puts(imp.nombre);
Cout<<imp.edad;
puts(imp.calle);
puts(imp.numero);
puts(imp.colonia);
Cout<<imp.sueldo;
Cout<<imp.antiguedad;
return Cout;
}

istream& operator>>(istream& Cin, empleado& le){

gets(le.nombre);
Cin>>le.edad;
gets(le.calle);
gets(le.numero);
gets(le.colonia);
Cin>>le.sueldo;
Cin>>le.antiguedad;
return Cin;
}

void empleado::lector_de_datos()
{
cout<<"Ingrese Nombre"<<endl;

gets(nombre);
cout<<"Ingrese Edad"<<endl;
cin>>edad;
cout<<"Ingrese Calle y numero"<<endl;
cin>>calle;
cin>>numero;
cout<<"Ingrese Colonia"<<endl;
cin>>colonia;
cout<<"Ingrese Sueldo"<<endl;
cin>>sueldo;
cout<<"Ingrese Antiguedad"<<endl;
cin>>antiguedad;
}
void empleado::impresor()
{
cout<<"Nombre: "<<nombre<<endl;
cout<<"Edad: "<<edad<<endl;
cout<<"Direccion: "<<calle<<numero<<" Colonia "<<colonia<<endl;
cout<<"Sueldo: "<<sueldo<<endl;
cout<<"Antiguedad: "<<antiguedad<<endl;
}

void main()
{

int dat,i;
empleado* emp;
clrscr();

cout<<"Cuantos pobres va a registar?"<<endl;
dat=getche();


cout<<"\nEspere\n";
sleep(2);
emp= new(empleado[dat]);


clrscr();


for (i=0;i<dat;i++)
	{
   cout<<"Trabajador "<<(i+1)<<endl;
	 emp[i].lector_de_datos();
   }

clrscr();

cout<<"Los datos ingresados son: "<<endl;

for (i=0;i<dat;i++)
  emp[i].impresor();
}
