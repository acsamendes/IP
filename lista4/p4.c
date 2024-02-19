#include <stdio.h>
 
int getNum(){
    int num;
    
    while(1){
        scanf("%d%*c", &num);
        if(num>0 && num<=10)return num;
    }
}
 
int main(){
    int m, n, i, j;
 
    m = getNum();
    n = getNum();
 
    int matriz[m][n];
 
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        scanf("%d", &matriz[i][j]);
 
    for(i=0; i<m; i++){
        printf("linha %d: ", i+1);
        for(j=0; j<n; j++){
            if(j==n-1) printf("%d", matriz[i][j]);
            else printf("%d,", matriz[i][j]);
        }
        printf("\n");
    }
            
 
    return 0;
}