#include <stdio.h>
 
typedef struct{
    double n1, n2, val;
}Fraction;
 
Fraction newFraction(int p, Fraction *v, double n1, double n2){
    v[p].n1 = n1;
    v[p].n2 = n2;
    v[p].val = n1/n2;
}
 
void eql(int len, Fraction *v){
    int i,j, equi = 0;
    for(i=0; i<len; i++){
        for(j=i+1; j<len; j++){
            if(v[i].val==v[j].val){
                printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", v[i].n1, v[i].n2, v[j].n1, v[j].n2);
                equi = 1;
            } 
        }
    }
 
    if(!equi) printf("Nao ha fracoes equivalentes na sequencia\n");
}
 
int main(){
    double n1, n2;
    int len, i, j, cases;    
    scanf("%d", &cases);
    for(i=1; i<=cases; i++){
        printf("Caso de teste %d\n", i);
        
        scanf("%d", &len);
 
        Fraction v[len];
        for(j=0; j<len; j++){
            scanf("%lf/%lf", &n1, &n2);
            newFraction(j, v, n1, n2);
        }
 
        eql(len, v);
    }
 
 
    return 0;
}
 
//casos de teste
//número de frações
//ler as frações
//comparar as divisões para verificar a equivalência