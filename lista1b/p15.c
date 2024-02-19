#include <stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
 
    if(n>=100000){
        printf("NUMERO INVALIDO");
        return 0;
    }
 
    int unidade, dezena, centena, unim, dezm;
 
    unidade = n%10;
    dezena = (n/10)%10;
    centena = ((n/10)/10)%10;
    unim = (((n/10)/10)/10)%10;
    dezm = ((((n/10)/10)/10)/10)%10;
 
    int palindromo;
    
    if(dezm!=0 && unim!=0 && centena!=0 && dezena!=0 && unidade!=0){
        if (dezm!=0){//se tiver 5 algarismos
        if(dezm==unidade && unim==dezena){
            palindromo = 0;
        }
    } else if (unim!=0){ //4 algarismos
        if(unim==unidade && centena==dezena){
            palindromo = 0;
        }
    } else if(centena!=0){//3 algarismos
        if(centena==unidade){
            palindromo = 0;
        }
    } else if (dezena!=0){//2 algarismos
        if(dezena==unidade){
            palindromo = 0; 
        }
    } else if(unidade!=0){
        palindromo = 0;        
    } 
    } else {
        palindromo = 1;
    }
 
    if(palindromo==0){
        printf("PALINDROMO");
    } else {
        printf("NAO PALINDROMO");
    }
 
        
        
    
 
 
}