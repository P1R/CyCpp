#include <iostream.h>
#include <string.h>

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
