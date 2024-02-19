#include <stdio.h>
 
int main(){
    int init, r, n, i, tot;
    scanf("%d %d %d", &init, &r, &n);
 
    int soma[n];
    for(i=0;i<n;i++){
       soma[i] = init; 
       init += r;
       tot+=soma[i];
    }
 
    printf("%d", tot);
 
    
 
}