#include <stdio.h>
 
int main(){
    int horas;
    scanf("%d", &horas);
 
    int aluguel =  (horas/3 *10) + (horas%3*5) ;
 
    printf("O VALOR A PAGAR E = %d.00\n", aluguel);
 
    return 0;
}