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
    lista temp=(lista)malloc(sizeof(struct nodo));
    temp->dato=e;
    temp->sig=l;
    l=temp;
    return 1;
}

int esvacia(lista l){
    return l==NULL;
}

lista resto(lista l){
return l->sig;
}

lista ultimo(lista l){
    return l->dato;
}

int numelem(lista l){
    if(esvacia(l))
        return 0;
    else
        return (1+numelem(resto(1)));
}

void impelem(elem e){
    printf("%c\n",e);
}
void implista(lista l){
    if(!esvacia(l)){
        impelem(ultimo(l))
        implista(resto(l));
    }
}

int esmenor(elem e1, elem e2){
    return e1<e2;
}

lista insord(elem e, lista l){
    if(esvacia(l))
        return cons(e,l);
    else
        if(esmenor(e,ultimo(l)))
            return cons(e,l);
        else
            return cons(ultimo(l), insord(e,resto(l)));
}

lista ordena(lista l){
    if(esvacia(l))
        return l;
    else
        return insord(ultimo(l), ordena(resto(l)));
}

int main(){
    lista l = vacia();
    lista l1 = insord('x',insord('a', insord('q',insord('k',vacia()))));

}


}


