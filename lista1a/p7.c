#include <stdio.h>
#include <math.h>
 
int main (){
    double l1, l2, l3;
 
    scanf("%lf", &l1);
    scanf("%lf", &l2);
    scanf("%lf", &l3);
 
    double t, area, valor;
 
    t = (l1 + l2+ l3)/2;
 
    valor = t*(t-l1)*(t-l2)*(t-l3);
 
    area = sqrt(valor);
 
    printf("A AREA DO TRIANGULO E = %.2lf\n", area);
 
}