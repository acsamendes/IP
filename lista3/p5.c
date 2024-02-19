#include <math.h> 
#include <stdio.h>
 
void semZero(int soma){
 
   // printf("\n#########3\nsoma = %d\n", soma);
    int i, convertido = 0, suma = soma;
    for(i=0; convertido < suma /*convertido<=suma*/; i++) {//i será a quantidade de algarismos no número
        convertido = pow(10, i);
        //printf("convertido = %d\n", convertido);
        //suma -= convertido
    }
    i--;
    //printf("soma = %d; i = %d\n", soma, i);
    //105       c = 100   suma = -6
 
    int tamanho = i;
    int numero[tamanho+1];
 
   // printf("tam = %d\n", tamanho);
    int j;
   // printf("i = %d\n", i);
    for(j=0; i!= -1; ){
        //printf("j = %d\n", j);
        //numero[j] = ((int) (soma/pow(10, i) )% 10);
        suma = pow(10, i);
        convertido = soma/suma;
        convertido = convertido % 10;
        //printf("conv = %d\n", convertido);
        if(convertido != 0){
            numero[j++] = convertido;
           // printf("%d", convertido);
        }
      //  printf("j = %d\n", j);
 
        i--;
    }
    
 
 
 
    int k;
    for(k=0;k<j; k++) {
        if(numero[k]!=0) 
            printf("%d", numero[k]);   
    }
    printf("\n");
    
}
 
int main(){
 
    int m, n, soma;
 
    while(1){
        soma = 0;
        scanf("%d %d", &m, &n);
        if(m==0 && n==0) break; //quebra a repetição se ambos os números forem 0
        
        soma = m+n;
        semZero(soma);
    }
 
 
    return 0;
}
 
/*
ler dois valores até que ambos seja zero
somar os dois valores
printar a soma sem 0(divisor de 10)
se o número é divisível por 10, retorna n\10
*/
 
 
 
/*
    15
    5
 
    [0] [1]
    6    5
 
 
    9 9
    0 6
 
          0    1   2
    res = 1    0   5
*/