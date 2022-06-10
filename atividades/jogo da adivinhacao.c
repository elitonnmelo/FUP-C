#include <stdio.h>
#include <stdlib.h>

int main(){
    int chave = rand() % 1024 + 1;
    int chute;
    while (chute != chave){
        printf("Tente adivinhar a chave:"); scanf("%d", &chute);
        if (chute > chave){
            printf("Maior");
        }
        else if (chute < chave){
            printf("Menor");
        }
    }
    printf("Acertou Mizeravi!!");
}