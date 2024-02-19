#include <stdio.h>
 
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
 
    int matriz[n][m];
 
    int i, j;
 
    //zera a matriz
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            matriz[i][j] = 0;
 
    for(i=0; i<n; i++){
        if(i%2!=0){// i impar
            for(j=1; j<m; j++){
                matriz[i][j] = 1;
                j++;
            }
        } else { // i par
            for(j=0; j<m; j++){
                matriz[i][j] = 1;
                j++;
            }
        }
 
    }
 
 
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
 
 
    return 0;
}