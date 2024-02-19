#include <stdio.h>
 
int main(){
    int ano;
    scanf("%d", &ano);
 
    if (ano>1582){
        if(ano%4==0){
            if(ano%100==0 & ano%400==0){
               printf("ANO BISSEXTO\n"); 
            } else if(ano%100!=0){
               printf("ANO BISSEXTO\n"); 
            } else {
                printf("ANO NAO BISSEXTO\n");
            }
        } else {
            printf("ANO NAO BISSEXTO\n");
        }
    } else {
        printf("ANO NÃO BISSEXTO\n");
    }
}