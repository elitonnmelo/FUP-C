#include <stdio.h>
int main(){
    char frase[200];
    scanf("%[^\n]", frase);
    int k = 0, l = 0, c=0, f= 0, d = 0;
    while (frase[k] != '\0'){
        k++;
    }
    for ( int i =0 ; i<= k ; i++){
        if (frase[i] == ' ' || frase[i] == '\0'){
            f = 0;
            c = i- 1;
            while ( f == 0){

                if (frase[c] == ' ' || c == 0){
                    f = 1;
                    printf("%c", frase[c]);

                }
                
                else{
                    printf("%c", frase[c]);
                }
                if (l==0 && frase[c] == frase[0]){
                    printf(" ");
                    l=1;
                }
                c--;
            }
            
        }

    }
    
}