#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
typedef struct{
    double u, x, y, z;
}Point;
 
Point pointBuilder(){
    Point p;
    scanf("%lf %lf %lf %lf", &p.u, &p.x, &p.y, &p.z);
    return p;
}
 
void calculadero(int tam, Point *p){
    double distancia;
    int i, j;
    for(i=0; i<tam; i++){
            if(i+1<tam){
                distancia = sqrt(((p[i].u-p[i+1].u)*(p[i].u-p[i+1].u))+((p[i].x-p[i+1].x)*(p[i].x-p[i+1].x))+((p[i].y-p[i+1].y)*(p[i].y-p[i+1].y))+((p[i].z-p[i+1].z)*(p[i].z-p[i+1].z)));
                printf("%.2lf\n", distancia);
            }
    }
}
 
int main(){
    int p;
    scanf("%d", &p);
 
    Point *pontos = malloc(p*sizeof(Point));
    
    int i;
    for(i=0; i<p; i++){
        pontos[i] = pointBuilder();
        //printf("%.2lf %.2lf %.2lf %.2lf\n", pontos[i].u, pontos[i].x, pontos[i].y, pontos[i].z);
    } 
 
    calculadero(p, pontos);
 
    return 0;
}