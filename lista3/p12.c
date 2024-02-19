#include <stdio.h>
#include <string.h>
 
char letters(char letra){ //retorna a letra minúscula
    if(letra <=90) return letra+32;
    else return letra;
}
 
void getString(char * word){      
    int i, controle = 0, aliteracao = 0;
    char inicial1 = letters(word[0]);//recebe o primeiro caracter da string para comparações
    char inicial2;//para comparar as iniciais
 
    for(i=0; i<strlen(word)+1; i++){//percorre cada caracter do vetor
        if(word[i] == ' ' || word[i] == '\0'){
            inicial2 = letters(word[i+1]); //recebe a inicial da prox palavra minúscula
 
            if(inicial1 == inicial2) {
                controle ++;
            }
            else {
                if(controle>=1) aliteracao++;
                controle = 0;
                inicial1 = letters(word[i+1]);
            }
 
        }
    }
 
    printf("%d\n", aliteracao);
}
 
 
 
int main(){
    char word[100*50+2];//+2 prevenir acesso a memória indevida
 
    while(scanf("%[^\n]%*c", word)!=EOF){
        getString(word);
    }
 
    return 0;
}
 
/*
função que le as palavras e adiciona na string 
percorre as palavras conforme inseridas e guarda o primeiro caracter para comparação
iterar aliteração conforme ocorrências
resolver o problema de mais duas palavras com inicial iguais seguidas
*/