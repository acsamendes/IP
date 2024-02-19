#include <stdio.h>
 
int main(){
    int i, teste;
    scanf("%d", &teste);
 
    for (i=0; i<teste; i++){    
    double f;
    scanf("%lf", &f);
 
    double c;
    c = (5*(f-32))/9;
 
    printf("%.2lf  FAHRENHEIT EQUIVALE A  %.2lf CELSIUS\n", f, c);
    }
    return 0;
}