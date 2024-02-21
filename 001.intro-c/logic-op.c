#include <stdio.h>


int main(){
    int a, b, c;

    printf("Digite tres numeros: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    /*
    && operador logico E
    || operador logico OU
    ! operador logico NAO
    */

    if(a==b && b==c){
        printf("a, b, c tem valores iguais");
    }
    return 0;
}