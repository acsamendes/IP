#include <stdio.h>
 
int str_len(char *string)
{
    int i;
    for (i = 0; string[i] != '\0'; i++)
        ;
    return i;
}
 
char cifrar(char c, int pos)
{
    while (pos--)
    {
        if (c >= 'Z')
            c = 'A';
        else
            c += 1;
    }
 
    return c;
}
 
int main()
{
    char string[60];
 
    int n;
    scanf("%d", &n);
 
    int pos, tam;
    while (n--)
    {
        scanf("%s", string);
        scanf("%d", &pos);
 
        tam = str_len(string);
 
        while (tam--)
        {
            string[tam] = cifrar(string[tam], pos);
        }
 
        printf("%s\n", string);
    }
 
    return 0;
}