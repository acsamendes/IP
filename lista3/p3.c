#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
 
bool isVogal(char caracter){
    if(caracter == 'a'|| caracter=='A') return 1;
    else if(caracter == 'e'|| caracter=='E') return 1;
    else if(caracter == 'i'|| caracter=='I') return 1;
    else if(caracter == 'o'|| caracter=='O') return 1;
    else if(caracter == 'u'|| caracter=='U') return 1;
    else return 0;
}
 
void getString(){
    char caracter;
    int letras = 0, vogais = 0;
 
    while(1){
        scanf("%c", &caracter);
        if(caracter=='\n') break;
        if(isalpha(caracter)) letras++;//letras é iterado se caracter for uma letra 
        if(isVogal(caracter)) vogais++;//vogais é incrementado se caracter for uma vogal
    }
 
    int consoantes = letras - vogais;
 
    printf("Letras = %d\n", letras);
    printf("Vogais = %d\n", vogais);
    printf("Consoantes = %d\n", consoantes);
 
}
 
int main(){
    int tam;
    scanf("%d\n", &tam);
 
    int i;
    for(i=0; i<tam; i++){
        getString();
    }
 
    return 0;
}
 
/*
ler a string realocando memória necessária
iterar letras com isalpha <ctype.h>
isVogal para identificar vogais e iterar vogais
subtrair vogais de letras para obter a quantidade de consoantes
*/