#include <stdio.h>
int main () {
    double a, b, c, d, e, f;
 
    scanf("%lf", &a);
  
    scanf("%lf", &b);
 
    scanf("%lf", &c);
   
    scanf("%lf", &d);
  
    scanf("%lf", &e);
    
    scanf("%lf", &f);
 
    double x,y;
    x= (f*b - e*c)/ (b*d - a*e);
    y= (f-d*x)/ e;
 
    printf("O VALOR DE X E = %.2lf\n", x);
    printf("O VALOR DE Y E = %.2lf\n", y); 
 
    
}