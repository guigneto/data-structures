#include <stdio.h>

double soma(double a,double b){
    return a+b;
}

int main(){

    double a,b;

    printf("Digite dois numeros para serem somados: ");
    scanf("%lf %lf",&a, &b);
    // scanf("%d",&b);

    printf("O resultado eh: %.2f",soma(a,b));

    return 0;
}