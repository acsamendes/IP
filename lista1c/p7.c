#include <stdio.h>
 
//biblioteca que tem o realloc
#include <stdlib.h>
 
struct aluno{
    int matricula;
    double p1, p2, p3, p4, p5, p6, p7, p8;
    double l1, l2, l3, l4, l5;
    double nt;
    int presen;
    double mp;
    double ml;
    double nf;
};
 
int main (){
    int i=0, i2;
    int j;
    struct aluno *vector;
 
    while(1){
        
        //realocando o tamanho do vetor
        vector = realloc(vector, (i+1) * sizeof(struct aluno));
 
        scanf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d", 
        &vector[i].matricula, &vector[i].p1, &vector[i].p2, &vector[i].p3, &vector[i].p4, 
        &vector[i].p5, &vector[i].p6, &vector[i].p7, &vector[i].p8, &vector[i].l1, &vector[i].l2, 
        &vector[i].l3, &vector[i].l4, &vector[i].l5, &vector[i].nt, &vector[i].presen);
        
        if(vector[i].matricula==-1){
            break;
        }
 
        i++;
    }
 
    for(j=0; j<i; j++){
        vector[j].mp = (vector[j].p1+vector[j].p2+vector[j].p3+vector[j].p4+vector[j].p5+vector[j].p6+vector[j].p7+vector[j].p8)/8;
        vector[j].ml = (vector[j].l1+vector[j].l2+vector[j].l3+vector[j].l4+vector[j].l5)/5;
        vector[j].nf = (0.7*vector[j].mp)+(0.15*vector[j].ml)+(0.15*vector[j].nt);
        printf("Matricula: %d, Nota Final: %.2lf, ", vector[j].matricula, vector[j].nf);
 
        if(vector[j].nf>=6 && vector[j].presen>96){
            printf("Situacao Final: APROVADO\n");
        } else if(vector[j].presen>=96 && vector[j].nf<6){
            printf("Situacao Final: REPROVADO POR NOTA\n");
        } else if(vector[j].nf>=6 && vector[j].presen<96){
            printf("Situacao Final: REPROVADO POR FREQUENCIA\n");
        } else {
            printf("Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n");
        }
    }
 
    return 0;
}