#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    int qtdPessoas;
    int consTot;
    int consPerCapita;
}Imovel;
 
typedef struct {
    int habitantes;
    double consuMed;
    Imovel *imoveis;
    int cpc[200];//vetor para ordenar o consumo per capita
}City;
 
void zeraCpc(int * cpc){
    int i;
    for(i=0; i<200; i++)cpc[i] = 0; 
}
 
Imovel imBuilder(){
    Imovel im;
    scanf("%d %d", &im.qtdPessoas, &im.consTot);
    im.consPerCapita = im.consTot/im.qtdPessoas;
    return im;
}
 
void calculaConsumo(int consuTot, int habitantes){
    printf("Consumo medio: %.2lf m3.\n", (double)consuTot/habitantes);
}
 
void perCapita(int * cpc){//printa o consumo per capita em ordem ascendente
    //ordena os consumos per capita
    int i;
    for(i=0; i<200; i++){
        if(cpc[i]!=0) printf("%d-%d ", cpc[i], i);
    }
    printf("\n");
}
 
void cityBuilder(int n){//quantidade de imoveis
    City cidade;
    cidade.imoveis = malloc((n+1)*sizeof(City));
    cidade.habitantes = 0;
    cidade.consuMed = 0;
    zeraCpc(cidade.cpc);
 
    int i;
    for(i=0; i<n; i++){
        cidade.imoveis[i] = imBuilder();
        cidade.habitantes += cidade.imoveis[i].qtdPessoas;       
        cidade.consuMed += cidade.imoveis[i].consTot;
        cidade.cpc[cidade.imoveis[i].consPerCapita] += cidade.imoveis[i].qtdPessoas;
    }
 
    perCapita(cidade.cpc);
    calculaConsumo(cidade.consuMed, cidade.habitantes);
 
    free(cidade.imoveis);
}
 
 
 
int main(){
    int n = 1, i, aux = 0;
 
 
    while(1){
        scanf("%d%*c", &n);//numero de imoveis
        if(n<=0) break;
        if(aux == 0) printf("Cidade# %d:\n", aux+1);
        else printf("\nCidade# %d:\n", aux+1);
        cityBuilder(n);//cria os imoveis 
        aux++;
    }
    return 0;
}
 
//Com certeza, nenhuma residência consome mais do que 200 m3 por mês. O final da
//entrada é representado pelo número zero.
 
// listar, por ordem ascendente de consumo, a quantidade de
// pessoas seguido de um hífen e o consumo destas pessoas, arredondando o valor para baixo.