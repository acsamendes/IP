#include <stdio.h>
 
int main (){
    int i, tam;
 
    scanf("%d", &tam);
 
    int vetor[tam];
 
    for(i=0; i<tam; i++){
        scanf("%d", &vetor[i]);
    }
    
    while(tam--) printf("%d ", vetor[tam]);
 
    printf("\n");
}