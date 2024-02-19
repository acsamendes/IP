#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct {
    char name[100];
    double price;
}Product;
 
typedef struct {
    char name[100];
    int qtd;
} Shop;
 
Product constr(int p, Product *v){
    scanf("%s %lf", v->name, &v->price);
}
 
 
Shop cons(int p, Shop *v){
    scanf("%s %d", v->name, &v->qtd);
}
 
double verify(Product *v, int tam1, Shop *v2, int tam2){
    int i, j;
    double val = 0;
 
    printf("v.nome[1] %s\n", v[0].name);
    printf("v2.nome[2] %s\n", v2[1].name);
 
    printf("V1\n");
    while(tam1--) printf("%s\n", v[tam1].name);
    printf("\nV2\n");
    while(tam2--) printf("%s\n", v2[tam2].name);
 
    /*for(i=0; i<tam1; i++){//percorre o vetor de precos
        for(j=0; j<tam2; j++){//percorre o vetor de quantidades
            printf("v.name= %s\tv2.name= %s\n", v[i].name,v2[j].name);
 
            if(strcmp(v[i].name,v2[j].name) == 0){
                val += v[i].price * v2[j].qtd;
                printf("val= %.2lf\n", val);
            }
        }
    }*/
 
    return val;
 
}
 
int main(){
 
    //LER PRODUTO E PRECO
    int elements;
 
    scanf("%d", &elements);
 
    Product *jhoy = malloc(elements * sizeof(Product));
 
 
    int i;
    for(i=0; i<elements; i++){
        constr(i, jhoy);
        printf("%s %.2lf\n", jhoy[i].name, jhoy[i].price);
    }
 
    
    //LER PRODUTO E QUANTIDADE
    int qtd;
 
    scanf("%d", &qtd);
 
    Shop *hugo = malloc(elements * sizeof(Shop));
 
     for(i=0; i<qtd; i++){
        cons(i, hugo);
        printf("%s %d\n", hugo[i].name, hugo[i].qtd);
    }   
 
    printf("R$ %.2lf\n", verify(jhoy, elements, hugo, qtd));
 
    return 0;
}