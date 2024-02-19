#include <stdio.h>
 
int main(){
    int n, i, y;
    scanf("%d", &n);
 
    for(i=2; i<=n; i++){
        y= i*i;
        printf("%d^2 = %d\n", i, y);
        i++;
    }
 
    return 0;
}