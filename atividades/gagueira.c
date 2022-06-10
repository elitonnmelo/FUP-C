#include <stdio.h>
int main(){
    char frase[101];
    scanf("%[^\n]", frase);
    int k = 0, l = 0, c=0;
    while (frase[k] != '\0'){
        k++;
    }
    
    
    
    for ( int i =0 ; i<= k ; i++){
        if (frase[i] == ' ' || i == k){
            printf(" ");
            for( int m = c; m <i; m++){
                printf( "%c", frase[m]);
            }
            if ( i  < k) printf(" ");
            c = i + 1;
            
        }
        else printf( "%c", frase[i]);

    }
    
}