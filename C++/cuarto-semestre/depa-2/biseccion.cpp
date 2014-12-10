/*******************************************************
Escuela Superior de Ingeniería Mecánica y Eléctrica
Alumnos:
    Perez-negrón Rocha David Eugenio
    Osmar trujillo huazo
Profesor:
    Cortés Pérez Alejandro
Programa metodo de la biseccion
*************************************************/
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;


class biseccion
{
        double inf, sup, aprox, error;
        int ciclo;
    public:
        biseccion();
        void leer_dato();
        void metodo();
        double funcion(double x){return (exp(-x)-x);
        }
};

biseccion::biseccion(){
        inf=sup=aprox=error=0.0;
        ciclo=0;
        }

void biseccion::leer_dato()
        {
        cout<<"dame el dato inf:";
        cin>>inf;
        cout << "dame le dato superior:";
        cin>>sup;
        cout <<"cuantos ciclos quieres:";
        cin>>ciclo;
        cout<<"cual es el error permitido:";
        cin>>error;}

void biseccion::metodo()
{
        if ((funcion(inf)*funcion(sup))>0)
            {
            cout<<"no se asegura que haya raiz";
            cout<<endl;
            getchar();
            exit(1);
            }
        for(int i = 1;i<=ciclo;i++){
            aprox=((inf*funcion(sup)) - (sup*funcion(inf)))/ (funcion (sup)-funcion(inf));
            if((funcion(inf)*funcion(aprox))<0)
                sup=aprox;
            else
            inf=aprox
            ;

            if(aprox==0){
                cout<<"la  raiz es exacta";
                getchar();
                exit(1);
            }
            if((sup-inf)<error)
            {
                cout<<"la raiz aprox es:"<<aprox;
                getchar();
                exit(1);
            }
        }
    cout<<"hasta"<<ciclo<<"ieraciones no hay solucion";
    getchar();
    }

main()
{
    biseccion obj;
    obj.leer_dato();
    obj.metodo();
}

