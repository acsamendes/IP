#include <stdio.h>
#include <stdlib.h>
 
int stringLen(char *str){
    int i;
    for(i=0; str[i]!='\0'; i++);
    return i;
}
 
char *getString(char *str){
    char c;
    int size = 0;
 
    int acai = 0;
    while(1){
        acai = scanf("%c", &c);
        str = (char*)realloc(str, (size+1) * sizeof(char));
        if(c=='\n' || acai == EOF) break;
        str[size] = c;
        size++;
    }
    str[size] = '\0';
    return str;
}
 
int prefixo(int tam, char *string/*, int aconteceu*/){
    if(tam == 0){
        //printf("%d\n", aconteceu);
        return 0;
    } 
    if(string[tam-1]=='h'&& string[tam]=='i') return 1 + prefixo(tam-1, string);
    //string[tam-1] = '\0';
    return 0 + prefixo(tam-1, string);
}
 
/*
    acxsxa
    ^
    |
    f(0) 0
    f(1) 0 + f(0) = 0
    f(2)\\
    f(3)
    f(4)
*/
 
void limpador(char **ponteiro_ref){
    free(*ponteiro_ref);
    *ponteiro_ref = NULL;
}
 
int func(int i){
    if(i == 0) return 0;
    return 1 + func(i-1);
}
//func(5);
 
/*
    f(0)  return 0
    f(1)  return 1 + 0
    f(2)  return 1 + f(1) = 1 + 1 =2
    f(3)  return 1 + f(2) = 1 + 2 = 3
    f(4)  return 1 + f(3) = 1 + 3 = 4
    f(5)
*/
 
int main(){
    char *str;
    int cases;
    scanf("%d%*c", &cases);
 
    while(cases--){
        str = getString(str);
        int tam = stringLen(str);
        printf("%d\n", prefixo(tam, str));
        limpador(&str);
    }
 
    return 0;
}