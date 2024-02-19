#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void getString(){
    char *str = NULL;
    char c;
    int size = 0;
 
    while(1){
        scanf("%c", &c);
        str = realloc(str, (size+1)*sizeof(char));
        if(c == '\n') break;
 
        str[size] = c;
        size++;
    }
 
    str[size] = '\0';
 
    printf("%s\n", str);
    free(str);
}
 
 
int main(){
    int n; 
    scanf("%d%*c", &n);
 
    
    while(n--){
        getString();
    }
 
    return 0;
}