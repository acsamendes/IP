#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
char maiusculas(char letra){
    if(letra>90) return letra-32;
    else return letra;
}
 
char minusculas(char letra){
    if(letra<90) return letra+32;
    else return letra;
}
 
void danca(char * string){    
    int i; 
    int controle = 0; //1 para maiúsculo
    for(i=0; i<strlen(string) + 1; i++){
        if(isalpha(string[i])){//verifica se é letra
            if(controle == 0) {
                printf("%c", maiusculas(string[i]));
                controle++;
            }
            else if(controle == 1){
                printf("%c", minusculas(string[i]));
                controle = 0;
            }
 
 
        } else if(string[i] == ' '){//se for espaço só printa
            printf("%c", string[i]);
        }
    }
 
    printf("\n");
 
}
 
int main(){
    char string[50];
    
    while(scanf("%[^\n]%*c", string) != EOF){
    danca(string);
    }
 
    return 0;
}
 
/*
percorrer a string e verificar se é letra
verificar se é maiúsculo ou minúsculo
*/