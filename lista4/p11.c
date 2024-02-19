#include <stdio.h>
 
int main(){
    int m, n;
    scanf("%d%*c", &m);
    scanf("%d%*c", &n);
 
    int matriz[m][n];
 
    int i, j;
    for(i=0; i<m; i++){//le a matriz
        for(j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
 
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(matriz[i][j] == 1111){
                //if((matriz[i][j-1] == 0 && matriz[i][j+1] == 0) || (matriz[i-1][j] == 4 && matriz[i+1][j] == 8)){
                printf("%d %d\n", i, j);
                return 0;
                //}
            }
        }
    }
 
    printf("WALLY NAO ESTA NA MATRIZ\n");
    return 0;
}