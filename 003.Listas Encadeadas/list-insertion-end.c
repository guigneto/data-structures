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

Ponto *listaPontos; //aponta para o inicio da lista

void addFirst(float x, float y){ //adiciona items no inicio da lista

    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;
    p->prox = listaPontos;
    listaPontos = p;
}

void addLast(float x, float y){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;
    p->prox = NULL;
    if(listaPontos == NULL){
        listaPontos = p;
    } else{
        Ponto *listaAux = listaPontos;
        while(listaAux->prox!=NULL){
            listaAux = listaAux->prox;
        }
        listaAux->prox = p;
    }
}

void imprime(Ponto *pointer){
     if(pointer!=NULL){
        printf("\nPonto(%.0f,%.0f)",pointer->x,pointer->y);
        imprime(pointer->prox);
     }
}

int main(){

    
    addFirst(1,5);
    addFirst(2,7);
    addFirst(5,3);
    addLast(1,1);

    Ponto *auxLista = listaPontos; 
    imprime(auxLista);

    return 0;
}