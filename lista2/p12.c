#include <stdio.h>
 
int main(){
    int tam, i;
    scanf("%d", &tam);
 
    int vetor[tam];
    for(i=0; i<tam;i++){
        scanf("%d", &vetor[i]);
    }
 
    int t, j;
    //bubble sort
    for(i=0; i<tam;i++){
        for(j=0; j<tam; j++){
            if(vetor[i] < vetor[j]){
                t = vetor[j];
                vetor[j] = vetor[i];
                vetor[i]= t;
            }
        }
    }
 
    for(i=0; i<tam;i++) printf("%d\n", vetor[i]);
 
    return 0;
}