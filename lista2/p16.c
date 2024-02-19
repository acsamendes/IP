#include <stdio.h>
 
int main(){
    int n, k, i;
    scanf("%d %d", &n, &k);
    
    int alunos[n];
    int adiantados = 0;
    for(i=0; i<n; i++) {
        scanf("%d", alunos + i);
        if (alunos[i]<=0) adiantados ++;
    }
 
    if(adiantados>=k){
        printf("NAO\n");
        while(n--){
            if(alunos[n]<=0) {
                printf("%d\n", n+1);
            }
        }
    } else {
        printf("SIM\n");
    }
 
    return 0;
}