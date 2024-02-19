#include <stdio.h>
#include <stdlib.h>
 
void countingSort(int tam){
    int v[tam];
    int i;
    for(i=0; i<tam; i++){
        scanf("%d", v + i);
    }
 
    int maior = v[0];
    for(i=1; i<tam; i++){//maior valor para o tam do contador
        if(v[i]>maior) maior = v[i];
    }
 
    int cont[maior+1];
    for(i=0; i<=maior; i++){//montar o contador, inicializando todos os elementos em 0
        cont[i] = 0;
    }
 
    for(i=0; i<tam; i++){//percorre o cont em função do v
        cont[v[i]]++;
    }
 
    for(i=1; i<maior+1; i++){//somar os elementos de cont com o anterior 
        cont[i]+= cont[i-1];
    }
 
    int ord[tam];
    for(i=0; i<tam; i++){
        cont[v[i]]--;
        ord[cont[v[i]]] = v[i];
    }
 
     for(i=0; i<tam; i++) printf("%d ", ord[i]);
     printf("\n");
 
}
 
int main(){
    int tam;
    while(1){
        scanf("%d", &tam);
        if(tam<=0) break;
        
        countingSort(tam);
    } 
 
    return 0;
}
/*
    5 * tamanho 
    O(tamanho)
 
    100
    5 * 100 = 500
*/