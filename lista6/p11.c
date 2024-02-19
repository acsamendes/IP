#include <stdio.h>
 
int produto(int prod, int m, int n){
    if (m==0 || n==0) return prod;
    prod += m;
    produto(prod, m, n-1);    
}
 
 
int main(){
    int m, n, cases;
    scanf("%d", &cases);
 
    while(cases--){
        scanf("%d %d", &m, &n);
        printf("%d\n", produto(0, m, n));
    }
 
    return 0;
}