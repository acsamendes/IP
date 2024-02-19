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
    int n;
    scanf("%d", &n);
 
    int dezenas[n][6];
 
    int i, j, k;
    for(i=0; i<n; i++){
        for(j=0; j<6; j++){
            scanf("%d", &dezenas[i][j]);
        }
    }
 
    int sorteados[6];
 
    for(i=0;i<6;i++){//le a sena sorteada
        scanf("%d", sorteados + i);
    }
 
 
    int premio = 0, sena = 0, quina = 0, quadra = 0;
    for(i=0; i<n; i++){//percorre as linhas
        premio = 0;
            for(j=0; j<6; j++){//percorre as colunas
                for(k=0; k<6; k++){//percorre sorteados
                    if(sorteados[j]==dezenas[i][k]) premio++;//incrementa o número de acertos
 
                }
            }
            if(premio == 6) sena ++;
            else if (premio == 5) quina ++;
            else if (premio == 4) quadra ++; 
        }
 
        
    verificador(sena, quina, quadra);
 
    return 0;
}