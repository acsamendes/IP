#include <stdio.h>
 
int main(){
    double n1, n2, n3;
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
 
    if(n3>n2 & n3>n1){ //n3 sendo o maior
        if(n2>n1){
            printf("%.2lf, %.2lf, %.2lf\n", n1, n2, n3); 
        } else {
            printf("%.2lf, %.2lf, %.2lf\n", n2, n1, n3);
        }
    } else if (n2>n3 & n2>n1){ //n2 sendo o maior
        if(n1>n3){
            printf("%.2lf, %.2lf, %.2lf\n", n3, n1, n2); 
        } else {
            printf("%.2lf, %.2lf, %.2lf\n", n1, n3, n2);
        }
    }else if (n1>n2 & n1>n3){ //n1 sendo o maior
        if(n3>n2){
            printf("%.2lf, %.2lf, %.2lf\n", n2, n3, n1); 
        } else {
            printf("%.2lf, %.2lf, %.2lf\n", n3, n2, n1);
        }
    }
}