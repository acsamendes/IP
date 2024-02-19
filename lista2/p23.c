#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
void setvogais(int * v){
    int i;
    for(i=0; i<5; i++){
        if(i==0) printf("(%d,", v[i]);
        else if(i==4) printf("%d)", v[i]);
        else printf("%d,", v[i]);
    }
    printf("\n");
 
}
 
int* isVogal(char * s){
    int quantidade_de_vogais = 5;//tamanho do vetor
    int * v = malloc(quantidade_de_vogais * sizeof(int));
    int i;
    for(i=0; i<6; i++){//zera o vetor de vogais
        v[i] = 0;
    }
 
    for(i=0; s[i]!='\0'; i++){//iterar o vetor de vogais conforme a ocorrência 
        if(s[i]=='a'||s[i]=='A') v[0]++;
        if(s[i]=='e'||s[i]=='E') v[1]++;
        if(s[i]=='i'||s[i]=='I') v[2]++;
        if(s[i]=='o'||s[i]=='O') v[3]++;
        if(s[i]=='u'||s[i]=='U') v[4]++;
    }
 
    //PRINTA A OCORRÊNCIA DAS VOGAIS
    setvogais(v);
 
 
    return v;
}
 
 
int main(){
    char s1[1000], s2[1000];
    int * v1 = NULL, * v2 = NULL;
    int i;
 
    s2[0] = '\0';//caracter nulo que representa o final de uma string
    scanf(" %[^;]%*c%[^\n]", s1, s2); 
 
 
    if(s2[0] == '\0'){
        printf("FORMATO INVALIDO!\n");
        return 0;//finaliza o programa caso o formato seja inválido
    } else{
        //itera as vogais
        v1 = isVogal(s1);
        v2 = isVogal(s2);
    }
    
 
    double distancia;
    for(i=0; i<5; i++) distancia+= pow(v1[i]-v2[i], 2);//somatório da distância
 
 
    printf("%.2lf\n", sqrt(distancia));
 
    free(v1);
    free(v2);
    return 0;
}