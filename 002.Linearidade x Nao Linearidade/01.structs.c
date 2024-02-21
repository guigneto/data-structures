#include <stdio.h>

struct pessoa {
    int idade;
    float altura;
};

typedef struct pessoa Pessoa;

int main(){

    Pessoa p;
    p.idade =15;
    p.altura = 1.65;

    printf("A altuta da pessoa eh: %.2f", p.altura);
    printf("\nA idade da pessoa eh %d",p.idade);
    
    return 0;
}