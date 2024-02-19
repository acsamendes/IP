#include <stdio.h>
#include <limits.h>
 
int main(){
    int m, n;
    scanf("%d %d%*c", &m, &n);
 
    int matriz[m][n];
 
    int i, j, maior = INT_MIN, menor = INT_MAX;
    int i_maior, j_maior, i_menor, j_menor;
 
    for(i=0; i<m; i++){//le a matriz
        for(j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j]>maior){
                i_maior = i; 
                j_maior = j;
                maior = matriz[i][j];
            }
 
            if(matriz[i][j]<menor){
                i_menor = i;
                j_menor = j; 
                menor = matriz[i][j];
            }
        }
    }
 
    matriz[i_maior][j_maior] = menor;
    matriz[i_menor][j_menor] = maior;
 
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    } 
 
    return 0;
}