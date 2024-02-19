#include <stdio.h>
 
int main(){
    int a, b, c, d;
    scanf("%d %d\n%d%d", &a, &b, &c, &d);
 
    double determinante = (a*d) - (b*c);
 
    printf("%.2lf\n", determinante);
 
    return 0;
}