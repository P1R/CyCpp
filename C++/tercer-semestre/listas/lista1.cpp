#include <iostream>

using namespace std;

typedef char elem;

typedef class nodo{
    public:
    elem dato;
    class nodo *sig;
}*lista;

lista vacia(){
    return NULL;
    }

lista cons(elem e, lista l){
    lista temp = new(class nodo);
    temp->dato=e;
    temp->sig=l;
    l=temp;
    return l;
}

int esvacia(lista l){
    return l==NULL;
    }

lista resta(lista l){
      return l->sig;
}

elem ultimo(lista l){
    return l->dato;
}

int numelem(lista l){
    if(!esvacia(l))
        return (1 + numelem(resta(l)));
    else
        return 0;
}

void impelem(elem e){
    cout << e << endl;
}

void implista(lista l){
    if(!esvacia(l)){
        //implista(resta(l));
        impelem(ultimo(l));
        implista(resta(l));
    }
}

int main()
{
    lista l = vacia();
        l=cons('a',cons('b',cons('c', cons('d',l))));
            //putchar(ultimo(l));
            cout << ultimo(l) << endl;
            //cout << ultimo(resta(resta(resta(l)))) << endl;
            //putchar('\n');
        //printf("La lista tiene %d elementos\n", numelem(l));
        cout << "La lista tiene " << numelem(l) << " elementos" << endl;
        //printf("El resto de la lista tiene %d elementos\n", numelem(resta(l)));
        cout << "El resto de la lista tiene " << numelem(resta(l)) << " elementos" << endl;
            implista(resta(l));
        return 0;
}
