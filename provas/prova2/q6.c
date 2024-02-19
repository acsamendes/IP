#include <stdio.h>
 
void getMatriz(int m, int n){
    int i, j, k;
    int matriz[m][n];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
 
    //ordenar
    int t;
    for(k=0; k<n; k++){
    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            if(matriz[i][k]>matriz[j][k]){
                t = matriz[i][k];
                matriz[i][k] = matriz[j][k];
                matriz[j][k] = t;
            }
        }
    }
 
    }
 
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 
}
 
int main(){
    int m, n;
 
    while (1){
        scanf("%d %d", &m, &n);
        if(m==0 && n==0) break;
 
        getMatriz(m, n);
 
        printf("\n");
    }
}