#include <stdio.h>
 
int main(){
    int n, k;
    scanf("%d", &n);
 
    double final = 0;
    double teste;
    if(n>1){
        for (k=1; k<n+1; k++){
            teste = k;
            final+= 1/teste;
            
        }
        printf("%.6lf\n", final);
    } else {
        printf("Numero invalido!");
    }
 
    return 0;
 
}