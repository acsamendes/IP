#include <stdio.h>
 
int main (){
    const double PI  = 3.14159;
 
    double raio, altura;
 
    scanf("%lf", &raio);
    scanf("%lf", &altura);
 
    //área do círculo 
    double ac = PI*(raio*raio);
    //área lateral do cilindro 
    double al = 2*PI*(raio*altura);
    //área total do cilindro
    double at = 2*ac + al;
    //calculo do custo
    //R$100,00 por m2
    double custo = at*100.00;
 
 
    printf("O VALOR DO CUSTO E = %.2lf\n", custo);
 
}