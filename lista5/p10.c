#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    double n1, n2, val;
    int broker;
}Fraction;
 
Fraction newFraction(){
    Fraction v;
    char parada;
    scanf("%lf/%lf%c", &v.n1, &v.n2, &parada);
    if(parada== '\n') v.broker = 0;
    else v.broker = 1;
    v.val = v.n1/v.n2;
 
    return v;
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
    
    Fraction *v;
    for(i=0; i<cases; i++){
        len = 0;
        printf("Caso de teste %d\n", i+1);
            
            v[len] = newFraction();
            v = realloc(v, (len+1)*sizeof(Fraction));
            if(!v[len].broker) eql(len, v);
        
    }
    return 0;
}