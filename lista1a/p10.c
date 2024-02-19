#include <stdio.h>
 
int main (){
    int num;
    scanf("%d", &num);
       
    int n3 = num%10;
    int n2 = (num/10)%10;
    int n1 = ((num/10)/10)%10;
 
    int dig = (n1 + 3*n2 + 5*n3)%7; 
 
    printf("O NOVO NUMERO E = %d%d\n", num, dig); 
}