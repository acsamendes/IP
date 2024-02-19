#include <stdio.h>
#include <stdlib.h>
 
typedef char bool;
 
 
int getTamanho(){//validar o tamanho inserido
    int tamanho;
    while(1){
        scanf("%d", &tamanho);
        if(tamanho>=1 && tamanho<101) break;
    }
 
    return tamanho;
}
 
int * getConjunto(int tamanho){//le o conjunto
    int i, num;
    int * conjunto = malloc(tamanho*sizeof(int));
    
    int size = 0;
    bool repetido;//variável de controle
    while (1){
        scanf("%d", &num);
        
        repetido = 0;
 
        for(i = 0; i < size; i++){//percorre o vetor
            if(conjunto[i] == num){ 
                repetido = 1; 
                break;//para de percorrer
            }
        }
 
        if(repetido == 0){
            conjunto[size] = num;//pq o size começa em 0
            size++;//aumenta o tamanho do laço que percorre o vetor
        }
 
        if(size == tamanho) break;//quebra o while se size for igual ao tamanho
    }
 
    return conjunto;
}
 
int * getUniao(int tamanhoA, int tamanhoB, int * conjA, int * conjB, int* tamanhoUniao_ref){
    int * uniao;
    int tamanhoUniao = *tamanhoUniao_ref;
    tamanhoUniao = tamanhoA+tamanhoB;
    uniao = malloc(tamanhoUniao*sizeof(int));
    int i, j, size = tamanhoA; 
/*  0   1  2  3     tam = 4
    {1, 2, 3, 4}
 
    {0, 1, 2, 3, 4}
*/
    for(i=0; i<tamanhoA; i++){//recebe todos os elementos de A
        uniao[i] = conjA[i];
    }
 
    bool repetido;
 
    for(i=0; i<tamanhoB;i++){//verificar quais elementos de b não estão em A
        repetido = 0;
        for(j=0; j<size; j++){
            if(conjB[i]==uniao[j]){
                repetido = 1; 
                break;
            }
        }
 
        if(repetido == 0){
            uniao[size] = conjB[i];
            size++;
        }
 
    }
 
    *tamanhoUniao_ref = size;
    return uniao;
}
 
int * getInter(int tamanhoA, int tamanhoB, int * conjA, int * conjB, int * tamanhoInter_ref){
    int * inter;
    int tamanhoInter = *tamanhoInter_ref;
    if(tamanhoA<tamanhoB) tamanhoInter = tamanhoA;
    else tamanhoInter = tamanhoB;
 
    inter = malloc(tamanhoInter*sizeof(int));
 
    int i, j, size=0;
    for(i=0; i<tamanhoA; i++){
        for(j=0; j<tamanhoB; j++){
            if(conjA[i]==conjB[j]){
                inter[size] = conjB[j];
                size++;
            }
        }
    }
 
    *tamanhoInter_ref = size;
    return inter;    
 
}
 
void mostrador(int tamanho, int *v){
    int i;
    printf("(");
    for(i=0; i<tamanho; i++){
        if(i==tamanho-1) printf("%d", v[i]);
        else printf("%d,", v[i]);
    }
    printf(")\n");
 
}
 
void limpador(int ** ponteiro_ref){
    free(*ponteiro_ref); //*conteúdo do main
    *ponteiro_ref = NULL;
            //ou
    /*int* ponteiro = *ponteiro_ref;
 
    free(ponteiro); pq ponteiro é uma variável local
    *ponteiro_ref = NULL
    */
}
 
int main(){
    int i;
    int tamanhoA = getTamanho();
    int tamanhoB = getTamanho();
 
    int * conjA = getConjunto(tamanhoA);
    int * conjB = getConjunto(tamanhoB);
 
    //união
    int * uniao;
    int uniaoSize;
    uniao = getUniao(tamanhoA, tamanhoB, conjA, conjB, &uniaoSize);
 
    mostrador(uniaoSize, uniao);
 
    //intersecção
    int * inter;
    int interSize;
    inter = getInter(tamanhoB, tamanhoA, conjB, conjA, &interSize);
 
    mostrador(interSize, inter);
 
    limpador(&inter);
    limpador(&uniao);
    limpador(&conjA);
    limpador(&conjB);
    return 0; 
}
 
/*
ler os tamanhos dos conjuntos 1<=a,b>1000
ler somente números diferentes para os conjuntos
apresentar o conjunto união
apresentar o conjunto intersecção
*/