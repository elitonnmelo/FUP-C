#include <stdio.h>
int main(){
    char frase[101], frase2[101];
    scanf("%[^\n]", frase);
    int k = 0, l = 0, c=0, d = 0, e = 0;
    for( k = 0; frase[k] != '\0'; k++){
        if ( frase[k] != ' '){
            frase2[d]= frase[k];
            d++;
        }
        
    }
    for ( int i =0 ; i< d ; i++){
        if ( frase2[i] >= 97 &&  frase2[i] <=122){
            frase2[i] = frase2[i] - 32;
        }

    }
    c = d -1;
    for ( int i =0 ; i < c ; i++, c--){
        e++;
        if ( frase2[i] == frase2[c]){
            l++;
        }

    }
    if (l == e){
        printf("SIM");
    }
    else printf("NAO");
    
}