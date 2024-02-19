#include <stdio.h>
int main (){
 
    double f, p;
 
    //ler o valor em fahrenheit
    scanf("%lf", &f);
 
    //ler o valor em polegadas
    scanf("%lf", &p);
 
 
    //converter fahrenherit para celsius
    double cel = (5*(f-32))/9;
 
    //converter polegadas para milimetros
    double mm = (p * 25.4);
 
    printf("O VALOR EM CELSIUS = %.2lf\n", cel);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", mm);
}