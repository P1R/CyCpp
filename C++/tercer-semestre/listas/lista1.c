#include <stdio.h>

typedef char elem;

typedef struct nodo{
    elem dato;
    struct nodo *sig;
}*lista;

lista vacia(){
    return NULL;
    }

lista cons(elem e, lista l){
    lista temp=(lista) malloc(sizeof(struct nodo));
    temp->dato=e;
    temp->sig=l;
    l=temp;
    return l;
}

int esvacia(lista l){
    return l==NULL;
    }

lista resta(lista l){
    //if(l->dato!=NULL)
        return l->sig;
}

elem ultimo(lista l){
    return l->dato;
}

int numelem(lista l){
    if(!esvacia(l))
        return (1 +  numelem(resta(l)));
    else
        return 0;
}
/*
int numelem(lista l){

    int A = 0;
    while(resta(l)!=esvacia(l)){
        numelem(resta(l));
            ++A;
        }
    return A;
}
*/

void impelem(elem e){
    printf("%c\n", e);
}

void implista(lista l){
    if(!esvacia(l)){
        impelem(ultimo(l));
        implista(resta(l));
    }
}

int main()
{
    lista l = vacia();
        l=cons('a',cons('b',cons('c', cons('d',l))));
            //putchar(ultimo(resta(resta(resta(l)))));
            putchar(ultimo(l));
            putchar('\n');
        printf("La lista tiene %d elementos\n", numelem(l));
        printf("El resto de la lista tiene %d elementos\n", numelem(resta(l)));
            implista(resta(l));
        return 0;
}
