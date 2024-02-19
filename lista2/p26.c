#include <stdio.h>
 
int main(){
    int casos;
    scanf("%d", &casos);
    int soma;
    while (casos--){
        soma = 0;
        int v[9];
        int i;
        for(i=0; i<9; i++){
            scanf("%d", v+i);
            soma+= v[i];
        } 
        
        int j, k;
 
        int t;
        for(i=0; i<9; i++){ //ordena o vetor
            for(j =0; j<9; j++){ // 9 * 9 vezes = 9²
                if(v[i]<v[j]){
                    t = v[j];
                    v[j] = v[i];
                    v[i] = t;
                }
            }
        }
 
        int resto = soma-100;
 
        
        for(i=0; i<9; i++){
            for(j=0; j<9; j++){
                if(v[i]+v[j]==resto)
                {
                    for(k = 0; k < 9; k++){
                        if(k == i || k == j) continue;
                        printf("%d\n", v[k]);       
                    }       
                    i = 9;
                    break;
                    
                }
            }
        }        
    }
 
 
 
    return 0;
}