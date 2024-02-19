#include <stdio.h>
#include <math.h>
 
void converte(int num){
    int convertido = 0;
    int i;
    for(i=0; num!=0; i++){
        convertido += num%2 * pow(10,i); 
        num= num/2;
    }
 
    printf("%d\n", convertido);
}
 
int main(){
    int num;
    while (scanf("%d", &num) != EOF){
        converte(num);
    }
 
    return 0;
}