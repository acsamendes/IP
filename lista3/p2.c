#include <stdio.h>
 
int ledLen(int num){
    int leds[10];
 
    //número de leds para cada algarismo
    leds[0] = 6;
    leds[1] = 2;
    leds[2] = 5;
    leds[3] = 5;
    leds[4] = 4;
    leds[5] = 5;
    leds[6] = 6;
    leds[7] = 3;
    leds[8] = 7;
    leds[9] = 6;
 
    return leds[num];    
}
 
void getNumber(int * qtd_ref){
    char c;
    int quantidade = 0;
    while(1){
        scanf("%c", &c);
        if(c == '\n') break;
 
        quantidade += ledLen(c - '0');
    }
 
    * qtd_ref = quantidade;
}
 
//retornar a quantidade de led aqui
 
 
int main(){
    int casos;
    scanf("%d\n", &casos);
 
    int qtd;
    int * quantidade = &qtd;
    
    while(casos--){
        *quantidade = 0;
        getNumber(quantidade);
        printf("%d leds\n", *quantidade);
    }
 
 
    return 0;
}
 
/*
0 - 6    9- 6    6- 6
1- 2
2- 5  3- 5    5- 5
 
4- 4
 
 
7- 3 
8- 7
 
*/