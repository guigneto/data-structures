/*
Uma lista é implementada com a utilização de:
- Structs
- Ponteiros
- Alocação Dinâmica
*/
#include <stdio.h>
#include <stdlib.h>

struct ponto {
    float x;
    float y;
    struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos; //inicia como NULL (Criou um ponteiro que não aponta pra lugar nenhum)

void add(float x, float y){

    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;
    p->prox = listaPontos;
    listaPontos = p;
}

int main(){

    
    add(1,5);
    add(2,7);
    add(5,3);

    printf("%.0f",listaPontos->prox->prox->x);

    return 0;
}
