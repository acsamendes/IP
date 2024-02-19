#include <stdio.h>
 
int main (){
    double massa, acel, tempo;
 
    scanf("%lf", &massa);
    scanf("%lf", &acel);
    scanf("%lf", &tempo);
 
    //VELOCIDADE
    double v = (acel*tempo)*3.6;
 
    //ESPAÇO PERCORRIDO
    double s = (acel*(tempo*tempo))/2;
 
    //TRABALHO REALIZADO
    double w = (massa*1000)*((acel* tempo)*(acel* tempo))/2;
 
    printf("VELOCIDADE = %.2lf\n", v);
    printf("ESPACO PERCORRIDO = %.2lf\n", s);
    printf("TRABALHO REALIZADO = %.2lf\n", w);
 
}