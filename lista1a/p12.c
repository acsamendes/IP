#include <stdio.h>
 
int main (){
    int num, cem, cinquenta, dez, um;
    scanf("%d", &num);
 
    //notas de 100
    cem = num/100;
 
    printf("NOTAS DE 100 = %d\n", cem);
 
    //notas de 50
    cinquenta = (num-(cem*100))/50;
    printf("NOTAS DE 50 = %d\n", cinquenta);
 
    //notas de 10
    dez = (num-(cem*100)-cinquenta*50)/10;
    printf("NOTAS DE 10 = %d\n", dez);
 
    //notsas de 1
    um = (num-(cem*100)- cinquenta*50 - dez*10)/1;
    printf("MOEDAS DE 1 = %d\n", um);
 
    return 0;
}