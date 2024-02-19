#include <stdio.h>
 
int main(){
    int h, m, s;
    scanf("%d", &h);
    scanf("%d", &m);
    scanf("%d", &s);
 
    int tempo = ((h*3600)+(m*60)+ s);
 
    printf("O TEMPO EM SEGUNDOS E = %d\n", tempo);
 
}