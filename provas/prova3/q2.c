#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    int id;
    double preco;
    char *nome;
 
}Mercadoria;
 
typedef struct{
    char *nome;
    int id, qtd;
}Cliente;
 
char *getNome(){
    char *nome = malloc(50 * sizeof(char));
    scanf("%[^\n]%*c", nome);
    //printf("%s\n", nome);
    return nome;
}
 
Mercadoria mercBuilder(){
    Mercadoria m;
    scanf("%d%*c", &m.id);
    //printf("m.id -> %d\n", m.id);
    scanf("%lf%*c", &m.preco);
    //printf("m.preco -> %.2lf\n", m.preco);
    m.nome = getNome();
    return m;
}
 
Cliente cliBuilder(){
    Cliente c;
    c.nome = getNome();
    scanf("%d%*c", &c.id);
    //printf("c.id -> %d\n", c.id);
    scanf("%d%*c", &c.qtd);
    //printf("c.qtd -> %d\n", c.qtd);
    return c;
}
 
void printCompra(Mercadoria *mercs, int len, Cliente *clientes, int n){
    int i,j, aux;
    for(i=0; i<n; i++){
        printf("Pedido de Compra do Cliente: %d\n", i+1);
        printf("Nome do cliente: %s\n", clientes[i].nome);
        for(j=0; j<len; j++){
            if(clientes[i].id == mercs[j].id){
                aux = j;
            }
        }
        printf("Nome da mercadoria: %s\n", mercs[aux].nome);
        printf("Quantidade: %d\n", clientes[i].qtd);
        printf("Valor da Mercadoria: %.2lf\n", mercs[aux].preco);
        printf("Valor total da Compra: %.2lf\n", clientes[i].qtd*mercs[aux].preco);
        if(i!=n-1)printf("\n");
    }
}
 
 
int main(){
    int len;
    scanf("%d%*c", &len);
 
    Mercadoria *mercs = malloc((len+1) * sizeof(Mercadoria));
    int i;
    for(i=0; i<len; i++){//lendo as mercadorias
        mercs[i] = mercBuilder();
    }
    
    int n;
    scanf("%d%*c", &n);
 
    Cliente *clientes = malloc((n+1) * sizeof(Cliente));
    for(i=0; i<n; i++){
        clientes[i] = cliBuilder();
    } 
 
    printCompra(mercs, len, clientes, n);
 
    free(mercs);
    free(clientes);
 
    return 0;
}