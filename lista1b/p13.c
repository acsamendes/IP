#include <stdio.h>
 
int main(){
    int cc, dr, rt, grau;
    scanf("%d", &cc);
    scanf("%d", &dr);
    scanf("%d", &rt);
 
    if (cc<7 && dr>50 && rt>80000){
        grau = 10;
    } else if (cc<7 && dr>50){
        grau = 9;
    } else if (cc<7){
        grau = 8;
    } else {
        grau = 7;
    }
    printf("ACO DE GRAU = %d\n", grau);
 
    //fazer com o if aninhado
}