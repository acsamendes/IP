#include <stdio.h>
#include <ctype.h>
 
int strLen(char*string){
    int i;
    for(i=0; string[i]!='\0'; i++);
    return i;
}
 
/*char **/ void proc_um(char * string){
    int i, len = strLen(string);
    for(i=0; i<len; i++){
        if(isalpha(string[i])){//é letra
            string[i] += 3;
        }
    } 
    
    
    //return string; 
}
 
/*char  **/void proc_dois(char * string){
    int tam = strLen(string);
    //char invertida[tam +1];
    char t;
 
    int i;
    for(i=0; i < tam/2; i++){
        t = string[i];
        string[i] = string[tam-1-i];
        string[tam-1-i] = t;
        //invertida[i] = string[tam-i-1];
    }
    //invertida[i] = '\0';
 
    //string = invertida;
 
    //return string;
}
 
/*char **/ void proc_tres(char * string){
    int len = strLen(string);
    int i;
    for(i=(len/2); i<len; i++){
        string[i] -= 1;
    }
    //return string;
}
 
void senhaFinal(char*string){
    //char * senhaFinal = proc_tres(proc_dois(proc_um(string)));
    proc_um(string);
    proc_dois(string);
    proc_tres(string);
    printf("%s\n", string);
 
}
 
int main(){
    int num;
    scanf("%d%*c", &num);
 
    char string[10001];
 
    while(num--){
        scanf("%[^\n]%*c", string);
        senhaFinal(string);
    }
 
 
    return 0;
}
 
/*
número de casos
ler a string 
1 processamento: somente letras devem avançar 3 posições (a ->d)
2 processamento: inverte a string
3 processamento: avança uma posição da metade para frente
*/