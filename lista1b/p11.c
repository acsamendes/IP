#include <stdio.h>
#include <math.h>
 
int main(){
    double a, b, c, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
 
    double delta = sqrt((b*b)-4*(a)*(c));
 
    if  (delta>0){
        x1 = (0 -b+ delta)/2*a;
        x2 = (0 -b- delta)/2*a;
        printf("RAIZES DISTINTAS\n");
        if (x1<x2){
            printf("X1 = %.2lf\n", x1);
            printf("X2 = %.2lf\n", x2);
        } else {
            printf("X1 = %.2lf\n", x2);
            printf("X2 = %.2lf\n", x1);
        }
    } else if (delta ==0){
        x1 = (0 -b)/2*a;
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
    } else {
        printf("RAIZES IMAGINARIAS\n");
    }
 
}