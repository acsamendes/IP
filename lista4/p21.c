#include <stdio.h>
 
int distancias[6][6]= {//1010 representa que não há acesso entre as cidades
    0, 63, 210, 190, 1010, 190,
    63, 0, 160, 150, 95, 10,
    210, 160, 0, 10, 1, 10,
    190, 150, 10, 0, 10, 20, 
    10, 95, 7, 21, 0, 80,
    190, 2, 1010, 41, 80, 0
};
 
//carceres -> 0  
//bugres   -> 1
//cuiaba   -> 2 
//varzea   -> 3 
//tangara  -> 4  
//lacerda  -> 5
 
int main(){
    int num;
    scanf("%d", &num);
 
    int rota[num];
 
int i,k;
    for(i=0; i<num; i++){
        scanf("%d", &rota[i]);
    }
 
    int soma = 0;
    for(i=0; i<num-1; i++){//percorre o vetor rota
        if(distancias[rota[i]][rota[i+1]] == 1010){
            printf("rota invalida!\n");
            return 0;
        } else  soma += distancias[rota[i]][rota [i+1]];
    }
       
    printf("%d\n", soma);
    
    return 0;
}