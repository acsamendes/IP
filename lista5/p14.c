// RAIZES DE EQUACOES QUADRADAS
 
#include <stdio.h>
#include <math.h>
 
typedef struct{
    double real;
    double imaginaria;
} Complex;
 
typedef struct{
    Complex x1;
    Complex x2;
} RaizEqu2;
 
RaizEqu2 calcula_raiz_equ_2(float a, float b, float c){
    RaizEqu2 resultado;
 
    double delta = b*b - 4 *a *c;
 
    if (delta >= 0){
        resultado.x1.real = (-b + sqrt(delta)) / (2*a);
        resultado.x2.real = (-b - sqrt(delta)) / (2*a);
        resultado.x1.imaginaria = 0.0;
    } else {
        resultado.x1.real = resultado.x2.real = -b / (2*a);
        resultado.x1.imaginaria = sqrt(fabs(-delta)) / (2*a);
        resultado.x2.imaginaria = -sqrt(fabs(-delta)) / (2*a);
    }
 
    return resultado;
}
 
void complex_print(Complex c, const char* name){
    printf("%s = ", name);
 
    if(c.real != 0.0){
        printf("%.2lf", c.real);
        if (c.imaginaria != 0.0) {
            if (c.imaginaria == 1.0) {
                printf("+i");
            } else if (c.imaginaria == -1.0) {
                printf("-i");
            } else {
                printf("%.2lfi", c.imaginaria);
            }
        }
    } else {
        if (c.imaginaria != 0.0) {
            if (c.imaginaria == 1.0) {
                printf("i");
            } else if (c.imaginaria == -1.0) {
                printf("-i");
            } else {
                printf("%.2lfi", c.imaginaria);
            }
        }
 
        if(c.imaginaria == 0.0){
            printf("0.00");
        }
    }
 
    printf("\n");
}
 
int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
 
    RaizEqu2 resultado = calcula_raiz_equ_2(a, b, c);
 
    complex_print(resultado.x1, "x1");
    complex_print(resultado.x2, "x2");
 
    return 0;
}