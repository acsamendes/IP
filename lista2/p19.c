#include <stdio.h>
#include <stdlib.h>
 
#define verdadeiro 1
#define falso 0
 
int * getConjunto(int tam, int* tamanhoConjunto){//le o conjunto
    int i, j, num;
    int * conjunto = NULL;
 
    int size = 0;
    char repetido;//variável de controle
    for(i=0; i<tam; i++){
        scanf("%d", &num);
        
        repetido = falso;
 
        for(j = 0; j < size; j++){//percorre o vetor
            if(conjunto[j] == num){ 
                repetido = verdadeiro; 
                break;//para de percorrer
            }
        }
 
        if(repetido == falso){
            conjunto = realloc(conjunto, (size+1)*sizeof(int));//realoca o tamanho de conjunto conforme a necessidade
            conjunto[size] = num;//pq o size começa em 0
            size++;//aumenta o tamanho do laço que percorre o vetor
        }
 
    }
    
    *tamanhoConjunto = size;
    return conjunto;
}
 
void ordenador(int *conjunto, int tamanhoConjunto){
    int i, j;
    int t = 0;
    for(i=0;i<tamanhoConjunto; i++){
        for(j=0;j<tamanhoConjunto; j++){
            if(conjunto[i] < conjunto[j]){
                t = conjunto[j];
                conjunto[j] = conjunto[i];
                conjunto[i] = t;
            }
 
        }
    }
}
 
void mostrador(int *conjunto, int tamanhoConjunto){
    int i;
    for(i=0; i<tamanhoConjunto; i++) printf("%d\n", conjunto[i]);
}
 
int main(){
    int tam;
    int tamanhoConjunto;
    scanf("%d", &tam);
 
    int * unicos = getConjunto(tam, &tamanhoConjunto);
 
    ordenador(unicos, tamanhoConjunto);
 
    mostrador(unicos, tamanhoConjunto);
 
    return 0;
}