#include <stdio.h>
#include <math.h>
 
int main (){
     double altura, aresta;
 
     scanf("%lf %lf", &altura, &aresta);
 
     double volume, area;
 
     double raiz = sqrt(3);
 
    area = (((3* (aresta*aresta))*raiz)/2);
    volume = ((1/3)*area*altura);
    
    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", volume);
}