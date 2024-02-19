#include <stdio.h>
 
void create(int tam){//função que cria um vetor de tamanho genérico
    int i;
    int validos = 0;
    int maior = 0;
    int vetor[tam];
    int id = 0;
 
    for(i=0; i<tam; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i]>maior){
            maior = vetor[i];
            id = i;
            validos++;
        }
    }
 
    printf("%d %d\n", id, vetor[id]);
 
}
 
 
int main(){
    int tam;
    int validos = 0;
    while(1){
        scanf("%d", &tam);
        if(tam>0){
            create(tam);
        } else if(tam<=0){
            break;
        }
    }
 
}