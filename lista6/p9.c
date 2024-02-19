#include <stdio.h>
 
int potencia(int n, int p){
    if(p==0) return 1;
    return n* potencia(n, p-1);
}
 
int main(){
    int cases, n, p;
    scanf("%d", &cases);
 
    while(cases--){
        scanf("%d %d", &n, &p);
        printf("%d\n", potencia(n, p));
    }
 
    return 0;
}