#include <stdio.h> 
 
int main(){
    int num;
    scanf("%d", &num);
       
    int n3 = num%10;
    int n2 = (num/10)%10;
    int n1 = ((num/10)/10)%10;
 
    printf("%d%d%d\n", n3, n2, n1);
 
    return 0;
}