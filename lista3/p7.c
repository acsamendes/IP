#include <stdio.h>
 
int strLen(char * string){
    int i;
    for(i=0; string[i]!='\0'; i++);
    return i;
}
 
int main(){
    int num, parada;
    scanf("%d", &num);
 
    char string[500];
 
    while(num--){
        scanf("%d %[^\n]", &parada, string);
 
        if(parada<strLen(string)) string[parada] = '\0';
        
 
        printf("%s\n", string);
    }
 
    return 0;
}