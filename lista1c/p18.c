#include <stdio.h>
 
int reverso(int n){
    int a=0;
    while(n!=0){
        a = a*10+(n%10);
        n/=10;
    }
    return a;
}
 
int main(){
    int n, a, b, i;
    int reverso_a, reverso_b; 
    scanf("%d", &n);
 
    int vetor[n];
    
    for(i=0;i<n;i++){
        scanf("%d %d", &a, &b);
        reverso_a = reverso(a);
        reverso_b = reverso(b);
        if(reverso_a>reverso_b){
            vetor[i]= reverso_a;
        } else{
            vetor[i]= reverso_b;
        }
    }
 
    for(i=0;i<n;i++) printf("%d  \n", vetor[i]);
    
 
    
}