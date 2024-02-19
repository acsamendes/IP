#include <stdio.h>
#include <limits.h>
 
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
 
    int matriz[n][m];
 
    int i, j, maior = INT_MIN, menor = INT_MAX; 
    double maior_aparece = 0, menor_aparece = 0;
    for(i=0; i<n; i++){//le a matriz
        for(j=0; j<m; j++){
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j]> maior){
                maior = matriz[i][j];
                maior_aparece = 1;
            } else if(matriz[i][j]== maior){
                maior_aparece++;  
 
            }
            if(matriz[i][j]< menor){
                menor = matriz[i][j];
                menor_aparece = 1;
            } else if(matriz[i][j] == menor){
                menor_aparece++;
            }
        }
    }
 
    printf("%d %.2lf%%\n", menor, (menor_aparece/ (n*m))*100);
    printf("%d %.2lf%%\n", maior, (maior_aparece/ (n*m))*100);
 
    return 0;
}