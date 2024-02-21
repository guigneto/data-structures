#include <stdio.h>

int main(){

    int v[4];

    for(int i=0;i<4;i++){
        printf("Digite um valor: ");
        scanf("%d",&v[i]);
    }

    for(int i=0; i<4; i++){
        printf("\nO valor de v[%d] = %d",i,v[i]);
    }

    return 0;
}