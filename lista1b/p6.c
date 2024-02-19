#include <stdio.h>
 
int main(){
    double salario;
    scanf("%lf", &salario);
 
    if (salario<=300){
        salario += salario*0.5;
    } else {
        salario += salario*0.3;
    }
 
    printf("SALARIO COM REAJUSTE = %.2lf\n", salario);
}