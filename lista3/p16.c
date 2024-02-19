#include <stdio.h>
#include <string.h>
 
void clear(char * ref_str, char* clr){
    int i, j, z;
    char t;
    for(i=0; i<strlen(ref_str); i++){
        for(j=0; j<strlen(clr); j++){
            if(ref_str[i]==clr[j]){
                for(z=i;z<strlen(ref_str); z++){
                    t = ref_str[z];
                    ref_str[z] = ref_str[z+1];
                    ref_str[z+1] = t;
                }
                i--;
            }
        }
    }
} 
 
 
int main(){
    char str[257];
    char clr[257];
 
    scanf("%[^\n]", str);//& para alterar direto no main
    scanf("\n%[^\n]", clr);
 
    clear(str, clr);
 
    printf("%s\n", str); 
 
    return 0;
}