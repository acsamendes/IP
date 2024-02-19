#include <stdio.h>
 
int main (){
    double fabrica, dist, imp;
 
    scanf("%lf", &fabrica);
    scanf("%lf", &dist);
    scanf("%lf", &imp);
 
    double novo = fabrica + ((dist/100)*fabrica) + ((imp/100)*fabrica);
 
    printf("O VALOR DO CARRO E = %.2lf\n", novo);
 
}