#include <stdio.h>
#include <stdlib.h>
 
int strLen(char * string){
    int i;
    for(i=0; string[i] != '\0'; i++);    
    return i;
}
 
char * getWord(){
    char * word = NULL;
    char c;
    int size = 0;
 
    char fim;
 
    while(1){
        fim = scanf("%c", &c);
        if(fim == EOF && size == 0) return NULL;
        word = realloc(word, (size+1) * sizeof(char));
 
        if(c == '\n' || fim == EOF) break;
 
        word[size] = c;      
        size++;      
    }
 
    word[size] = '\0';
    return word;
}
 
void verifica(char * word){
    int tam = strLen(word);
    char inversa[tam+1];//O STRLEN SÓ CONTA ATÉ O \0
    inversa[tam] = '\0';
 
    int i;
    for(i=0; i<tam; i++){//de frente pra trás
        inversa[i] = word[tam-i-1];
    }
 
    int aux = 0;
    for(i=0; i<tam; i++){
        if(word[i]!=inversa[i]) aux = 1; 
    }
 
    if(aux==1) printf("nao");
    else printf("sim");
 
    printf("\n");
 
    free(word);
}
 
 
 
int main(){
    
    char* string;
 
    while(1){
        string = getWord();
        if(string == NULL) break;
        verifica(string);
    }
    
    return 0;
}
/*
ler as palavras com alocação até o EOF
função booleana que cria a inversa a partir da original como tamanho e as percorre comparando 
caso forem iguais, printa 'sim', se não, 'não'
*/