#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int exp){
    if(exp==1){
        return base;
    }

    return base*potencia(base, exp-1);
}

int main(){

    int v = potencia(2,4); //2^4 = 16
    printf("%d",v);
    return 0;
}