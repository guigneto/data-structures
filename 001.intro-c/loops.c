#include <stdio.h>

int main(){

    int a = 1;


    printf("\nWHILE LOOP\n");
    while(a <= 10){
        printf("%d\n",a);
        a++;
    }
    
    printf("\nFOR LOOP\n");

    //for (inicializacao; teste; incremento)
    for(int i=10;i>0;i--){
        printf("%d\n",i);
    }
    return 0;
}