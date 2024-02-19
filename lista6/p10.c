#include <stdio.h>
#include <stdlib.h>
 
int stringLen(char *str){
    int i;
    for(i=0; str[i]!='\0'; i++);
    return i;
}
 
char *getString(){
    char *str = NULL;
    char c;
    int size = 0;
 
    int acai = 0;
    while(1){
        acai = scanf("%c", &c);
        str = realloc(str, (size+1) * sizeof(char));
        if(c=='\n' || acai == EOF) break;
        str[size] = c;
        size++;
    }
    str[size] = '\0';
    return str;
}
 
void prefixo(int tam, char*string){
    /*printf("string = %s ; tam = %d\n", string, tam);
    printf("string[tam] = %c\n", string[tam]);
    printf("string[tam-1] = %c\n", string[tam-1]);
    */
    if(tam == 1) return;
    string[tam-1] = '\0';
    printf("%s\n", string);
    prefixo(tam-1, string);
}
 
int main(){
    int cases;
    scanf("%d%*c", &cases);
 
    char *string; 
    int i, tam;
    for(i=0; i<cases; i++){
        tam = 0;
        printf("Caso de teste %d\n", i+1);
        string = getString();
        tam = stringLen(string);
 
        printf("%s\n", string);
        prefixo(tam, string);
        
    }
    
 
 
    free(string);
    return 0;
}