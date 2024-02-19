#include <stdio.h>
 
int main(){
    int i, teste;
    scanf("%d", &teste);
 
    for (i=0; i<teste; i++){
        int pessoas;
    double pop, geral, arq, cad;
 
    scanf("%d %lf %lf %lf %lf", &pessoas, &pop, &geral, &arq, &cad);
 
    double renda = (pessoas*(pop/100)*1) + (pessoas*(geral/100)*5) + (pessoas*(arq/100)*10)+
    (pessoas*(cad/100)*20);
 
    printf("A RENDA DO JOGO N. %d E = %.2lf\n", i+1, renda);
    }
 
        
   
    
 
    return 0;
 
}