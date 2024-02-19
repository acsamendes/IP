#include <stdio.h>
 
int main()
{
    int sudoku[9][9];
    
 
    int i, j;
    int soma;
    char val; // pra gastar menos espaço ;-;    
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            scanf("%d", &sudoku[i][j]);
        }
    }
 
    for(i=0; i<9;i++){ //verifica as linhas
        soma = 0;
        val = '0';
        for(j=0; j<9; j++){
            soma += sudoku[i][j];
 
        }
            if(soma != 45){
                printf("invalido\n");
                return 0;
            }
    }
 
    for(i=0; i<9;i++){//verifica colunas
        soma = 0;
        for(j=0; j<9; j++){
            soma += sudoku[j][i];
        }
 
        if(soma != 45){
                printf("invalido\n");
                return 0;
            }
    }
 
    printf("valido\n");
    
    return 0;
}
/*
ler matriz 9x9
a soma da linha ou coluna deve ser 45
*/