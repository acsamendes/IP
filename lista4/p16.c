#include <stdio.h>
 
int main(){
    int l;
    scanf("%d", &l);
 
    int logotipo[l][l];
    int i, j, k, m;
    for(i=0; i<l; i++){//le o logotipo
        for(j=0; j<l; j++){
            scanf("%d", &logotipo[i][j]);
        }
    }
 
    int num;
    scanf("%d", &num);
 
    int matriz[num][num];
    for(i=0; i<num; i++){//le a matriz
        for(j=0; j<num; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
 
    int aux = 0;
    for(i=0; i<=num-l; i++){//percorre a matriz a matriz
        for(j=0; j<=num-l; j++){
            aux=0;
            for(k=0; k<l; k++){//percorre o logotipo 
                for(m=0; m<l; m++){
                    if(matriz[i+k][j+m]==logotipo[k][m]) aux++;
                }
            }
            if(aux==l*l){
                printf("sim\n");
                return 0;
            }
        }
    }
 
    printf("nao\n");
 
 
 
    return 0;
}
 
/*
ler o logotipo
ler a imagem codificada
procurar o logotipo dentro da imagem
*/