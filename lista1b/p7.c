#include <stdio.h>
 
int main(){
    int x, y;
    scanf("%d", &x);
 
    if (x<1){
        y = x;
    } else if (x==1){
        y = 0;
    } else {
        y = x*x;
    }
 
    printf("Y = %d", x);
 
}