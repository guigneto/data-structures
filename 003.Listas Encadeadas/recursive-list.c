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

void imprime(Ponto *pointer){
     if(pointer!=NULL){
        printf("\nPonto(%.0f,%.0f)",pointer->x,pointer->y);
        imprime(pointer->prox);
     }
}

int main(){

    
    add(1,5);
    add(2,7);
    add(5,3);

    Ponto *auxLista = listaPontos; 
    imprime(auxLista);

    return 0;
}
