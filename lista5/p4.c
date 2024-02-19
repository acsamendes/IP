#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
typedef struct{
    double u, x, y, z, norma;
}Vetor;
 
Vetor builder(int i, Vetor *a){
    scanf("%lf %lf %lf %lf", &a[i].u, &a[i].x, &a[i].y, &a[i].z);
    a[i].norma = sqrt((a[i].u * a[i].u) + (a[i].x * a[i].x) + (a[i].y * a[i].y) + (a[i].z * a[i].z));
}
 
void ordenador(int tam, Vetor *a){
    int i, j;
    Vetor t;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            if(a[j].norma>a[i].norma){
                t=a[i];
                a[i] = a[j];
                a[j] = t; 
            }
        }
    }
 
    for(i=0; i<tam; i++) printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", a[i].u, a[i].x, a[i].y, a[i].z, a[i].norma);
 
}
 
//problema na leitura dos nomes
 
int main(){
    int pontos;
    scanf("%d", &pontos);
 
    Vetor *a = malloc(pontos*sizeof(Vetor));
 
    int i;
    for(i=0; i<pontos; i++){
        builder(i, a);
        //printf("Norma: %.2lf\n", );
    }
 
    ordenador(pontos, a);
 
    free(a);
    return 0;
}