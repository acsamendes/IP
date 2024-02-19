#include <stdio.h>
 
int logaritmo(int n){
    if(n<=1) return 0;
    return 1 + logaritmo(n/2);
}
 
int main(){
    int cases;
    scanf("%d", &cases);
    
    int n;
 
    while(cases--){
        scanf("%d", &n);
        printf("%d\n", logaritmo(n));
    }
 
 
    return 0;
}