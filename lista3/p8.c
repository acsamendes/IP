#include <stdio.h>
 
int strLen(char * string){
    int i;
    for(i=0; string[i]!='\0'; i++);
    return i;
}
 
int procurar(char c, char * string){
    int i;
    for(i=0; i<=strLen(string); i++){
        if(string[i] == c){
            return i;
        } 
    }
    return -1; 
}
 
int main(){
    int casos, resultado;
    scanf("%d%*c", &casos);
    
    char string[500], c;
 
    while(casos--){
        resultado = 0;
        scanf("%c %[^\n]%*c", &c, string);
 
        resultado = procurar(c, string);
 
        if(resultado == -1) printf("Caractere %c nao encontrado.", c);
        else printf("Caractere %c encontrado no indice %d da string.", c, resultado);
        printf("\n");
    }
 
 
    return 0;
}
/*
ler o caractere e a string
função que percorre a string e retorna o indice da primeira ocorrência do caractere
*/