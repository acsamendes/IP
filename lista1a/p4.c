#include <stdio.h>
 
int main (){
    double a, b, c;
 
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
 
    double delta = (b*b) - 4*(a*c);
 
    printf("O VALOR DE DELTA E = %.2lf\n", delta);
 
}