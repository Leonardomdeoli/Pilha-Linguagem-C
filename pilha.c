#include"pilha.h";
#include<stdbool.h>
#include<stdio.h>

struct pilha {

    NO* topo;

};


PILHA   *cria(){

    PILHA *p = (PILHA*)malloc(sizeof(PILHA));

    p->topo = NULL;
    return p;

}

NO* getTopo(PILHA*p){
    return p->topo;
}

void setTopo(PILHA*p,NO*t){
    p->topo=t;
}

bool vazia(PILHA *p){
    return(p->topo == NULL);
}

void PUSH(PILHA* p, int x){
    NO* novo = aloca(x,getTopo(p));
    setTopo(p,novo);
     printf("\n\nPUSH %d",x);
}//a função aloca(no.h) cria um novo
//nó e atribuida os campos valor e prox


void POP(PILHA *p){

    if(!vazia(p)){

        NO *q = getTopo(p);
        setTopo(p,getProx(getTopo(p)));
        printf("\n\nPOP %d",getValor(q));

        free(q);
    }

}//a função getProx(no.h)


void RESPOSTA(PILHA *p){

    NO *q,*t;
    int x = 0;
    t = getValor(p);

    for( q = getTopo(p); q != NULL; q = getProx(q)){
        x+=getValor(q);
    }

    printf("\n\na) (%d,%d)",getValor(t),x);
}





