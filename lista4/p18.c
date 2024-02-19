#include <stdio.h>
 
 
int main(){
 
    int n;
    scanf("%d", &n);
 
    int matriz [n][n];
 
/*    int **matriz;
    //ALOCAR AS LINHAS
    matriz = (int**) malloc(linhas * sizeof(int*));
 
    //ALOCAR AS COLUNAS
    for(int l = 0; l < linhas; l++){
        matriz[l] = (int*) malloc(colunas * sizeof(int))
    }*/
 
        int i, j;
        for(i=0; i<n; i++){//le os elementos da matriz
            for(j=0; j<n; j++){
                scanf("%d", &matriz[i][j]);
            }
        }
 
        int t, k;
        for(i=0; i<n; i++){//ordena
            for(k=0; k<n; k++){
                for(j=0; j<n-1; j++){
                    if(matriz[j][k]> matriz[j+1][k]){
                        t = matriz[j][k];
                        matriz[j][k] = matriz[j+1][k];
                        matriz[j+1][k] = t; 
                    }
                }
            }
        }
 
    for(i=0; i<n; i++){//printa a matriz
        for(j=0; j<n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 
 
    return 0;
}