//programa de listas con memoria dinamica y entradas desde teclado

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

        impelem(ultimo(l));
        implista(resta(l));
    }
}

int main()
{
    char *a, i;
    int n;
    lista l = vacia();

    cout << "Cuantos datos?:";
        cin >> n;
        a = new(char[n]);

        for(i=0; i<n; ++i){
            cout << "ingresa caracter " << (i+1)<< ":";
            cin >> a[i];
        }
        for(i=n; i>=0; --i){
            l=cons(a[i],l);
        }

        //l=cons(a[0],cons(a[1],cons(a[2], cons(a[3],l))));
            cout << ultimo(l) << endl;
        cout << "La lista tiene " << numelem(l) << " elementos" << endl;
        cout << "El resto de la lista tiene " << numelem(resta(l)) << " elementos" << endl;
            implista(resta(l));
        return 0;
}
