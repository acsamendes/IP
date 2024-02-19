#include <stdio.h>
 
int main(){
    int matricula, depen;
    double salario_min, salario_fun, taxa;
 
    //matricula, salario minimo, dependentes, salario func, taxa
    scanf("%d %lf %d %lf %lf", &matricula, &salario_min, &depen, &salario_fun, &taxa);
 
    double ib; //calculando o imposto bruto 
    if(salario_fun/salario_min>12){
        ib = (salario_fun*0.2);
    } else if(salario_fun/salario_min>5){
        ib = (salario_fun*0.08);
    } else{
        ib=0;
    }
 
    double il;//calculando imposto líquido
    il = ib-(depen*300);
 
    double resultado;//calculando o imposto normal
    resultado = il - (salario_fun*(taxa/100));
 
    printf("MATRICULA = %d\n", matricula);
    printf("IMPOSTO BRUTO = %.2lf\n", ib);
    printf("IMPOSTO LIQUIDO = %.2lf\n", il);
    printf("RESULTADO = %.2lf\n", resultado);
 
    if(resultado<0){
        printf("IMPOSTO A RECEBER\n");
    } else if(resultado==0){
        printf("IMPOSTO QUITADO\n");
    } else {
        printf("IMPOSTO A PAGAR\n");
    }
 
}