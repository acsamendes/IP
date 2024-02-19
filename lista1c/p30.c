#include <stdio.h>
 
int main(){
    int i, n;
    
    while(1){
        scanf("%d", &n);
        if(n>1) break;
        printf("Fatoracao nao e possivel para o numero %d!\n", n);
    }
 
    while (n>1){
        printf("%d = ", n);
            for(i=2;i<=n;i++){
                while(n%i==0){
                    if(n==i){
                        printf("%d\n", i);
                        n = n/i;
                    } else {
                        printf("%d x ", i);
                        n = n/i;
                    }
                }
            }
 
    }
    
    return 0;        
}