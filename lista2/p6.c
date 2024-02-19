#include <stdio.h>
 
int main(){
    int i, tam;
    int soma = 0;
 
    scanf("%d", &tam);
 
    int vetor[tam];
 
    for(i=0; i<tam; i++){
        scanf("%d", &vetor[i]);
        soma +=vetor[i];
    }
 
    printf("%d\n", soma);
}