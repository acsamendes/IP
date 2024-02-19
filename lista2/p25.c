#include <stdio.h>
 
void verificador(int sena, int quina, int quadra){
    if(sena>0) printf("Houve %d acertador(es) da sena", sena);
    else printf("Nao houve acertador para sena");
    printf("\n");
 
    if(quina>0) printf("Houve %d acertador(es) da quina", quina);
    else printf("Nao houve acertador para quina");
    printf("\n");
 
    if(quadra>0) printf("Houve %d acertador(es) da quadra", quadra);
    else printf("Nao houve acertador para quadra");
    printf("\n");
}
 
int main(){
    int i, k;
    int sorteados[6];
 
    for(i=0;i<6;i++){//le a sena sorteada
        if(i==5)scanf("%d", sorteados +i);
        else scanf("%d ", sorteados +i);
    }
 
    int qtd, apostas, j;
    int premio = 0, sena = 0, quina = 0, quadra = 0;
 
    scanf("%d", &qtd);//número de apostas
 
    for(i=0; i<qtd; i++){
        premio = 0;
 
        for(k=0; k<6; k++){
            scanf("%d ", &apostas);//leitura das apostas
     
            for(j=0; j<6; j++){//verifica se a aposta é igual ao número sorteado
                if(sorteados[j]==apostas) premio++;//incrementa o número de acertos
            }
        }
        
        if(premio == 6) sena ++;
        else if (premio == 5) quina ++;
        else if (premio == 4) quadra ++;
    } 
    verificador(sena, quina, quadra);
    return 0;
}