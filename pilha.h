#include"no.c"//TAD NÓ
#include<stdbool.h>

typedef struct pilha PILHA;

PILHA* cria();

void PUSH (PILHA* p,int x);

void POP(PILHA* p);

void RESPOSTA(PILHA* p);

bool vazia(PILHA* p);

NO* getTopo(PILHA* p);

void setTopo(PILHA* p, NO * t);
