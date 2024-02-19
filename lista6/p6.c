#include <stdio.h>
 
int coelho(int num){
    if(num<=1) return 2;
    if(num%2 == 0) return 3 + coelho(num-1);//par
    return 2 + coelho(num-1); //impar 
}
 
int main(){
    int cases;
    scanf("%d%*c", &cases);
 
    int num;
    while(cases--){
        scanf("%d", &num);
        printf("%d\n", coelho(num));
    }
 
    return 0;
}