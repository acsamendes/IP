#include <stdio.h>
 
int logaritmo(int num){
    if(num<=1) return 0;
    return 1+ logaritmo(num/2);
 
}
 
int main(){
    int cases;
    scanf("%d", &cases);
 
    int num;
    while(cases--){
        scanf("%d", &num);
        printf("%d\n", logaritmo(num));
    }
 
 
    return 0;
}