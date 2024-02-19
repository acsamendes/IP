#include <stdio.h>
 
int main(){
    int tam, i;
    
    scanf("%d", &tam);
 
    int valores[tam];
 
    for(i=0; i<tam; i++) scanf("%d ", valores + i);
 
    int buscas;
    scanf("%d", &buscas);
 
    int valor, j, achei;
    for(i=0; i<buscas; i++){
        valor = 0;
        achei = 1;
        scanf("%d", &valor);
        for(j=0; j<tam; j++){
            if(valor==valores[  j]) achei = 0; 
        }
 
        if(achei==0)printf("ACHEI");
        else printf("NAO ACHEI");
 
        printf("\n");
    }
 
 
 
 
    return 0;
}
 
/*
tamanho de vetor
ler valores do vetor
número de buscas
ler buscas
percorrer o vetor e verificar se o número está no vetor
printar achei ou não achei
*/