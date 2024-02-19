#include <stdio.h>
#include <stdlib.h>
 
 
char * getString(int * tam_ref, char parada){
    char * string = NULL;
 
    int i, size = 0;
    char caracter;
    while(1){
        scanf("%c", &caracter);
 
        if(caracter == parada) break;
        else{
            string = realloc(string, (size+1)*sizeof(int));
            string[size] = caracter; 
            size++;
        } 
    }
 
    //forçar parada quando for printar a string
    string = realloc(string, (size+1)*sizeof(int));
    string[size] = '\0';
 
    *tam_ref = size;//retornar para o main o tamanho do vetor
    return string;
 
}
 
void intercala(char * string1, int tam1, char * string2, int tam2){
    int tamanho = tam1+tam2;
    char combinado[tamanho+1];//+1 para o barra zero 
    int i, j;
    int index1_atual = 0, index2_atual = 0; 
 
    for(i=0; i<tamanho; i++){
 
        //LOGICA DE PREDICADOS
        if((i % 2 == 0 && index1_atual < tam1) || index2_atual >= tam2){//se o i for par e tam1 ainda é válido || estourou o tam2 
            combinado[i] = string1[index1_atual++];//insere string1 em combinado
        }
        else if((i % 2 == 1 && index2_atual < tam2) || index1_atual >= tam1){//se o i for ímpar e tam2 for válido || estourou o tam1
            combinado[i]= string2[index2_atual++];//insere string 2 em combinado
        }
 
 
        /*if(i%2 == 0){
            if(index1_atual<tam1){//para não acessar memória indevida e percorrer apenas o tamanho original da string
                combinado[i] = string1[index1_atual];
                index1_atual++;//para percorrer todas as posições da string sem furos
            } else {
                for(j=index2_atual; j<tam2; j++, i++){
                    combinado[i] = string2[j];
                }
                break;
            }
            
        }
        else{
            if(index2_atual<tam2){
                combinado[i]= string2[index2_atual];
                index2_atual++;
            }
        }
 
 
        printf("s = %s\n", combinado);*/
        /*
            pao
            mortadela
 
            pmaoortadela
        */
    }
    
    combinado[tamanho] = '\0';//indicar o fim da string
 
    printf("%s\n", combinado);//printa até o '\0' 
    
}
 
void limpador(char ** ponteiro_ref){
    free(*ponteiro_ref); //*conteúdo do main
    *ponteiro_ref = NULL;
}
 
int main(){
    int tam, tam1, tam2;
    scanf("%d\n", &tam);
 
    char * string1;
    char * string2;
 
    while(tam--){
        string1 = getString(&tam1, ' ');
        string2 = getString(&tam2, '\n');
 
        intercala(string1, tam1, string2, tam2);
    }
 
    limpador(&string1);
    limpador(&string2);    
    
 
    return 0;
}
 
/*
ler a quantidade de string
função que le a string e aloca o tamanho dinamicamente
combinar as string alternando os elementos
*/