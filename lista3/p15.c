#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char toLower(char caracter){
    if(caracter >= 'A' && caracter<='Z') return caracter + ('a'-'A');
    else return caracter;
}
 
char * getString(){//le a string
    char * string = NULL;
 
    char caracter;
    int size = 0;
 
    while(1){
        scanf("%c", &caracter);
 
        if(caracter == '\n') break;
        else{
            string = realloc(string, (size+1)*sizeof(char));//realoca o espaço de memória para a string
            string[size] = toLower(caracter);//recebe a string inteira em minúsculas
            size++;//aumenta o tamanho de string
        }
    }
 
    string = realloc(string, (size+1)*sizeof(char));
    string[size] = '\0';
 
    return string; 
}
 
void repetidas(char * string){
    int i, j, frequencia = 0, max_frequencia = 0;
    char repetidos[strlen(string)];//guardar letras repetidas
    int freq[strlen(string)];//guardar a frequencia das letras repetidas
 
    int letras[26];
 
    for(i = 0; i < 26; i++){
        letras[i] = 0;
    }
 
    for(i=0; i<strlen(string); i++){
        //frequencia = 0;
        for(j=i; j<strlen(string); j++){
            if(string[i]==string[j]){
               // frequencia++;
                letras[string[i] - 'a']++; 
                break;
            }
        } 
 
        //if(frequencia > max_frequencia) max_frequencia = frequencia;
        //if(frequencia > 0 ) repetidos[assai++] = string[i];
 
        
        //freq[i] = frequencia;
               
       // frequencia = 0;
    }
 
    /*for(i = 0; i < strlen(string); i++){
        if(freq[i] == max_frequencia){
            printf("%c", string[i]);
        }
    }*/
 
    for(i = 0; i < 26; i++){
        if(letras[i] > max_frequencia) max_frequencia = letras[i];
    }
    
    for(i = 0; i < 26; i++){
        if(letras[i] == max_frequencia){
            printf("%c", i+'a');
        }
    }
 
    // C  200%mod + 'a' = 
 
    printf("\n");
 
 
    //printf("%d", frequencia);
   // printf("%s", repetidos);
}
 
 
void limpador(char ** ponteiro_ref){
    free(*ponteiro_ref);
    *ponteiro_ref = NULL;
}
 
int main(){
    int num;
    scanf("%d%*c", &num);
 
    char * string;
    while(num--){
        string = getString();
        repetidas(string);
    }
 
 
 
    limpador(&string);
    return 0;
}
 
/*
função que lê a string alocando dinamicamente 
tornar todos os caracteres minúsculos 
função que percorre a string duas vezes, uma para o caracter na string original e outra string que recebe os que repetem
verificar qual cracter repete mais, caso sejam mais de 1, printar os dois
ordenar os repetidos
*/