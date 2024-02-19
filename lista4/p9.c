#include <stdio.h>
 
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
 
    int matriz[n][m];
 
    int i, j;
    for(i=0; i<n; i++)//zera a matriz
        for(j=0; j<m; j++)
            matriz[i][j] = 0;
 
    int aux = 1;
    // i impar -> j par
    //i par -> j impar
    for(i=0; i<n; i++){
        if(i%2!=0){//i impar
            for(j=0; j<m; j++){
                matriz[i][j] = aux;
                j++;
                aux ++;
            }
        } else {//i par
            for(j=1; j<m; j++){
                matriz[i][j] = aux;
                j++;
                aux ++;
            }
        }
 
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}