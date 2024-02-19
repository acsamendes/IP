#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    int likes;
    int retweets;
    int mencoes;
} User;
 
User* alocc(){
    User* PA = NULL;
 
    do {
        PA = (User*)malloc(sizeof(User));
    } while (PA == NULL);
    return PA;
}
 
int main(){
    int D, M;
    scanf("%d %d", &D, &M);
 
    User* Matriz[D][D];
    int i, j;
    for(i = 0; i < D; i++){
        for(j = 0; j < D; j++){
            Matriz[i][j] = NULL;
        }
    }
 
    int nLks, nRet, nMen;
    while (M--){
        scanf("%d %d %d %d %d", &i, &j, &nLks, &nRet, &nMen);
 
        Matriz[i][j] = alocc();
        Matriz[i][j]->likes = nLks;
        Matriz[i][j]->retweets = nRet;
        Matriz[i][j]->mencoes = nMen;
    }
    
    for(i = 0; i < D; i++){
        int Tlikes = 0;
        int Tretw = 0;
        int Tmen = 0;
        for(j = 0; j < D; j++){
            if(Matriz[i][j] == NULL) continue;
            Tlikes += Matriz[i][j]->likes;
            Tretw += Matriz[i][j]->retweets;
            Tmen += Matriz[i][j]->mencoes;
        }
        if(!Tlikes && !Tretw && !Tmen) continue; 
        printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, Tlikes, Tretw, Tmen);
    }
    for (i = 0; i < D; i++){
        for(j = 0; j < D; j++){
            free(Matriz[i][j]);
        }
    }
    return 0;
}