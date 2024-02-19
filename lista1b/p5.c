#include <stdio.h>
 
int main (){
    double nota;
    scanf("%lf", &nota);
 
    char conceito; 
 
    /*switch (nota){
        case nota>=9 :
        conceito = 'A';
        break;
 
        case nota>=7.5 & nota<9 :
        conceito = 'B';
        break;
 
        case nota>=6 & nota<7.5 :
        conceito = 'C';
        break;
 
        case nota>=0 & nota<6 :
        conceito = 'D';
        break;  
    }*/
 
    if (nota>=9){
        conceito = 'A';
    } else if (nota>=7.5 & nota<9){
        conceito = 'B';
    } else if (nota>=6 & nota<7.5){
        conceito = 'C';
    } else if (nota>=0 & nota<6){
        conceito = 'D';
    }
 
    printf("NOTA = %.1lf CONCEITO = %c\n", nota, conceito);
 
}