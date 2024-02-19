#include <stdio.h>
#include <stdlib.h>
 
int soma(int tam, int *v){
    if(tam < 0) return 0;
    return v[tam] + soma(tam-1, v);
}
 
void limpador(int **ponteiro_ref){
    free(*ponteiro_ref);
    *ponteiro_ref = NULL;
}
 
int main(){
    int cases;
    scanf("%d%*c", &cases);
    int *v;
    int tam, i;
 
    while(cases--){
        scanf("%d", &tam);
        v = (int*)malloc(tam *sizeof(int));//aloca o tamanho do vetor
        for(i=0; i<tam; i++)scanf("%d", v + i);//le o vetor
    
        printf("%d\n", soma(tam-1, v));
        limpador(&v);
    }
 
    return 0;
}