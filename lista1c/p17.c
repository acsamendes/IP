#include <stdio.h>
 
int main(){
    int m, n, i, j;
    scanf("%d", &m);
    scanf("%d", &n);
 
    int matriz[m][n];
 
    for(i=0; i<m; i++){
        for(j=0; j<i && j<n; j++){
                if(j==i-1 || j==n-1){
                    printf("(%d,%d)\n", i+1,j+1);
                } else {
                    printf("(%d,%d)-", i+1,j+1);
                }
        }
    }
        
            
}