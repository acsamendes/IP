#include <stdio.h>
 
int main(){
    int tam, i, j;
    scanf("%d%*c", &tam);
 
    int matriz[tam][tam];
 
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
 
 
    for(i=0; i<tam; i++){
        j=tam;
        while(j--){
            if(i+j ==tam-1)printf("%d\n", matriz[i][j]);
        }
    }
 
    return 0;
}