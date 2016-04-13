#include"No.h"
#include<stdlib.h>//importar FREE
#include<stdbool.h>

struct noh{
    int valor;
    NO *prox;

};

NO * aloca(int x,NO *p){
    NO *novo = (NO *)malloc(sizeof(NO));

    novo->valor = x;
    novo->prox = p;

    return novo;
}
void desaloca(NO *p){

    free(p);

}

int getValor(NO *p){

    return p->valor;

}

NO * getProx(NO *p){

    return p->prox;

}

void setValor(NO *p, int x){

    p->valor=x;

}
void setProx(NO *p,NO *q){

    p->prox = q;

}


int soma(NO *p){
    int cont = 0;
    NO *q;

    for(q = p; q!=NULL; q = getProx(q)){

        cont = cont + getValor(q);

    }

    return cont;

}

bool encontra( NO *n, int x ) {
    NO *aux;

    for ( aux = n; aux != NULL; aux = getProx( aux ) ) {
        if ( getValor( aux ) == x ) {
            return true;
        }
    }
    return false;
}

int ultimoValor( NO *n ) {
    NO *aux = n;

    while ( getProx( aux ) != NULL ) {
        aux = getProx( aux );
    }

    return getValor( aux );
}

bool estaOrdenado( NO *n ) {
    NO *aux;

    for ( aux = n; aux != NULL; aux = getProx( aux ) ) {
        if ( getValor( aux ) > getValor( getProx( aux ) ) ) {
            return false;
        }
    }

    return true;
}






