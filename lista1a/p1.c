#include <stdio.h>
int main (){
    double salario, qtd , ck, cc, cd;
 
    scanf("%lf %lf", &salario, &qtd);
    
    //Custo por kW = (salario * 70%)/100
   ck = (salario * 0.7)/100;
    //Custo do consumo = Custo por kw * quantidade consumida
    cc = (ck*qtd);
    //Consumo com desconto = custo do consumo * 90%
    cd = cc - (cc * 0.1);
 
    printf("Custo por kW: R$ %.2lf\n", ck);
    printf("Custo do consumo: R$ %.2lf\n", cc);
    printf("Custo com desconto: R$ %.2lf\n", cd);
    
}