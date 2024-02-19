#include <stdio.h>
 
int main(){
    int n, k, i;
    int numeros = 0;
    while(1){//valida o tamanho do vetor
        scanf("%d", &n);
        if(n>=1 && n<=1000) break;
    }
 
    int vetor[n];
    for(i=0;i<n;i++){//le os elementos do vetor
        scanf("%d", &vetor[i]);
    }
 
    scanf("%d", &k);
 
    for(i=0;i<n;i++){
        if(vetor[i]>k || vetor[i]==k) numeros++;
    }
 
    printf("%d\n", numeros);
 
 
    return 0;
}