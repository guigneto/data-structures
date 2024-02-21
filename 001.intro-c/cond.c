#include <stdio.h>

int main(){

    /*
    == comparacao de igualdade
    > comparacao de maior
    < comparacao de menor
    >= comparacao de maior ou igual
    <= comparacao de menor ou igual
    != comparacao de diferenca
    */

    int a;
    printf("Digite um numero: ");
    scanf("%d",&a);

    if(a<0){
        printf("A variavel 'a' eh 0");
    } else {
        printf("A varavel 'a' eh diferente de 0");
    }

    return 0;
}