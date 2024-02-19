#include <stdio.h>
 
void troca(int *v1, int *v2){
    int t = *v1;
    *v1 = *v2;
    *v2 = t;  
}
 
int *trocaOpostosSeMaior(int *v, int tam)
{
    int i, j, t;
    for (i = 0; i < tam; i++)
    {
        for (j = i; j < tam; j++)
        {
            if ((v[i] > v[j]) && (i<j) && (j==tam-(i+1))) 
            {
                troca(&v[i], &v[j]);
            }
        }
    }
 
    return v;
}
 
int main()
{
    // casos teste
    int n;
    scanf("%d%*c", &n);
 
    int tam, i;
 
    while (n--)
    {
        scanf("%d", &tam);
 
        int v[tam];
 
        // ler o vetor
        for (i = 0; i < tam; i++)
            scanf("%d", &v[i]);
 
        trocaOpostosSeMaior(v, tam);
 
        for (i = 0; i < tam; i++){
            if(i==tam-1) printf("%d\n", v[i]);
            else printf("%d ", v[i]);
        }
    }
 
    return 0;
}