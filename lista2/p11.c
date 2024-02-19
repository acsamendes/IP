#include <stdio.h>
#define INT_MIN  (-2147483648)
#define INT_MAX  (2147483647) 
 
int main(){
    int tam, i;
    scanf("%d",&tam);
 
    int vetor[tam];
 
    int maior, menor;
    for(i=0; i<tam; i++){
        scanf("%d", &vetor[i]);//le os elementos do vetor
        if(i==0){
            maior = vetor[i];
            menor = vetor[i];
        }
        if(vetor[i]>maior){//maior recebe o maior valor conforme lê os elementos
            maior = vetor[i];
        }
        if(vetor[i]< menor){//menor valor recebe o menor valor  
            menor = vetor[i];
        } 
    }
    
    printf("\n\n");
 
    for(i=0; i<tam; i++){//printa o vetor na ordem original
        if(i == tam - 1){
            printf("%d\n", vetor[i]);
        } else {
            printf("%d ", vetor[i]);
        }
    }
 
    while(tam--) {//printa o vetor inverso
        if(tam == 0){
            printf("%d\n", vetor[tam]);
        } else {
            printf("%d ", vetor[tam]);
        }
    } 
 
    printf("%d\n", maior);
    printf("%d\n", menor);//não está iterando!!!!!!!!!!!!!!!!!!!!
 
    return 0;
}