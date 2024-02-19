#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    double c;
    int e;
}Polinomio;
 
Polinomio poliBuider(){
    Polinomio p;
    scanf("%lf %d%*c", &p.c, &p.e);
    return p;
}
 
void poliPrint(Polinomio p){
 
    if(p.c > 0 && p.c < 0.0001) return;
    if(p.c < 0 && p.c > -0.0001) return;
 
    if(p.e == 0)printf("%+.2lf", p.c);
    else printf("%+.2lfX^%d", p.c, p.e);
}
 
void poliSoma(int n1, Polinomio *p1, int n2, Polinomio *p2, int maior){
    int i, j;
 
    Polinomio *soma = NULL;
    soma = malloc((maior) * sizeof(Polinomio));
 
    for(i = 0; i < maior; i++){
        soma[i].c = 0;
        soma[i].e = i;
    }
 
    for(i=0; i<maior; i++){
        for(j=0; j<n1; j++){
 
            if(p1[j].e == i){
                soma[i].c += p1[j].c;
                break;
            }
        }
    }
 
    for(i=0; i<n2; i++){
        soma[p2[i].e].c += p2[i].c;
        soma[p2[i].e].e = p2[i].e;
    } 
 
    for(i=maior; i>=0; i--){
        if(soma[i].c != 0) poliPrint(soma[i]);
    }
        
    free(soma);
}
 
int main(){
    int cases;
    scanf("%d%*c", &cases);
 
    char op;
    int n1, i, maior;
 
    Polinomio *p1 = NULL;
    
    int n2;
    Polinomio *p2 = NULL; 
    
    
    while(cases--){
        maior = 0;
        scanf("%c", &op);
 
        scanf("%d", &n1);
        p1 = malloc(n1*sizeof(Polinomio));
        for(i=0; i<n1; i++){
            p1[i] = poliBuider();
            if(p1[i].e>maior) maior = p1[i].e; 
        }
 
 
        scanf("%d", &n2);
        p2 = malloc(n2*sizeof(Polinomio));
 
        for(i=0; i<n2; i++){
            p2[i] = poliBuider();
            if(p2[i].e>maior) maior = p2[i].e;
 
            if(op == '-') p2[i].c *= -1;
        }
 
        poliSoma(n1, p1, n2, p2, maior+1);
        printf("\n");
    
        free(p1);
        free(p2);
        p1 = p2 = NULL;
    }
 
    return 0;
}