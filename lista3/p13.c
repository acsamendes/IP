#include <stdio.h>
#define N 100000
 
int strLen(char * string){
    int i;
    for(i=0;string[i]!= '\0'; i++);
    return i;
}
 
int main()
{
    char str1[N], str2[N];
 
    int num, i, aux;
    scanf("%d%*c", &num);
 
    while (num--)
    {
        aux = 0;
        scanf("%s %s", str1, str2);
        int tamanho = strLen(str1);
 
        for(i=0; i<tamanho; i++){
            if(str1[i]>str2[i]) aux += 26 - (str1[i] - str2[i]);
            else aux += (str2[i] - str1[i]);
        }
 
        printf("%d\n", aux);
        
    }
 
    return 0;
}