#include <stdio.h>
 
int main(){
 
    double num[4];
    double t;
    int i, j;
    for(i = 0; i < 4; i++) scanf("%lf", &num[i]);
 
    //BUBBLE SORT  O(n²)
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(num[i] < num[j]){
                t = num[j];
                num[j] = num[i];
                num[i] = t;
                //printf("t = %.2lf, num[j] = %.2lf, num[i] = %.2lf\n", t, num[j], num[i]);
            }
            //printf("(%dx%d)  %.2lf, %.2lf, %.2lf, %.2lf\n", i, j, num[0], num[1], num[2], num[3]);
        }
   
    }
  
    for(i=0; i<4; i++){ 
        if (i==3){
            printf("%.2lf\n", num[i]);
        } else {
            printf("%.2lf, ", num[i]);
        }
    }
    return 0;
 
    /*double n1, n2, n3, n4;
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);
 
    if (n1<n2 & n1<n3 & n1<n4){ //n1 sendo o menor
        if(n2<n3<n4){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n1, n2, n3, n4); 
        } else if (n2<n4<n3){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n1, n2, n4, n3);
        } else if (n3<n2<n4){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n1, n3, n2, n4);
        } else if (n3<n4<n2){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n1, n3, n4, n2);
        } else if (n4<n3<n2){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n1, n4, n3, n2);
        } else if (n4<n2<n3){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n1, n4, n2, n3);
        }
    } else if (n2<n1 & n2<n3 & n2<n4){ // n2 sendo o menor
        if(n3<n4<n1){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n2, n3, n4, n1); 
        } else if(n3<n1<n4){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n2, n3, n1, n4); 
        } else if(n1<n3<n4){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n2, n1, n3, n4); 
        } else if(n1<n4<n3){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n2, n1, n4, n3); 
        } else if(n4<n3<n1){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n2, n4, n3, n1); 
        } else if(n4<n1<n3){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n2, n4, n1, n3); 
        }
    } else if (n3<n1 & n3<n2 & n3<n4){ // n3 sendo o menor
        if(n4<n1<n2){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n3, n4, n1, n2); 
        } else if(n4<n2<n1){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n3, n4, n2, n1); 
        } else if(n2<n4<n1){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n3, n2, n4, n1); 
        } else if(n2<n1<n4){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n3, n2, n1, n4); 
        } else if(n1<n2<n4){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n3, n1, n2, n4); 
        } else if(n1<n4<n2){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n3, n1, n4, n2); 
        }
    } else if (n4<n1 & n4<n2 & n4<n3){ // n4 sendo o menor
        if(n3<n2<n1){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n4, n3, n2, n1); 
        } else if(n3<n1<n2){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n4, n3, n1, n2); 
        } else if(n2<n1<n3){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n4, n2, n1, n3); 
        } else if(n2<n3<n1){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n4, n2, n3, n1); 
        } else if(n1<n3<n2){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n4, n1, n3, n2); 
        } else if(n1<n2<n3){
            printf("%.2lf, %.2lf, %.2lf, %.2lf\n", n4, n1, n2, n3); 
        }
    }*/
    //ideia aleatoria: 
    //criar um array que recebe todos os números,
    //um gerador de todas as combinações possíveis entre o 4 numeros
    //algo para selecionar a combinação em que os 4 números estão em ordem
 
}