#include <stdio.h>
#include <stdlib.h>
 
int len(char *string){
    int i;
    for(i=0; string[i]!='\0'; i++); 
    return i;
}
 
void getString(FILE * arq){
    char string[51];
    
    //fscanf(arq, "%[^\n]", string);
 
    while(scanf("%[^\n]%*c", string) != EOF){
        fprintf(arq, "%s\n", string);
    }
 
}
 
void aparece(FILE *arq){
    char *string = (char*)malloc(51 * sizeof(char));
    int aux = 0, i, tam;
    while(fscanf(arq, "%[^\n]%*c", string) != EOF){
        printf("%s\n", string);
        printf("linha %d posicoes ", aux+1);
        tam = len(string);
        for(i=0; i<tam; i++){
            if(string[i] == 'x'|| string[i] == 'X') printf("%d", i+1);
        }
        printf("\n");
        //printf("tamanho : %d\n", len(string));
        aux++;//indicar linhas
        //printf("string -> %s\n", string);
    }
 
    free(string);
}
 
int main(){
    FILE *arq = NULL;
    arq = fopen("teste.txt", "a+");
 
    getString(arq);
 
    //char string[10] = "1234";
 
    //fprintf(arq, "%s\n", string);
 
    aparece(arq);
 
    fclose(arq);
 
    return 0;
}