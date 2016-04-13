#include "pilha.c";
#include<stdbool.h>
#include<stdio.h>
#include<string.h>


int main(){
   PILHA * p = cria();
    PUSH(p,10);
    PUSH(p,5);
    PUSH(p,3);
    PUSH(p,40);
    POP(p);
    PUSH(p,11);
    PUSH(p,4);
    PUSH(p,7);
    POP(p);
    POP(p);
    RESPOSTA(p);
    }
