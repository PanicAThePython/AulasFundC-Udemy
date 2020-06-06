#include <stdio.h>
#include <stdlib.h>

void main(){

    int count = 0;
    int indice = 0;
    int tamanho;

    printf("Tamanho do seu nome: ");
    scanf("%d", &tamanho);

    char vetor[tamanho];

    for(int i = 0; i < tamanho; i++){
            printf("%da letra: ", i+1);
            scanf(" %c", &vetor[i]);
    }
    printf("\n");
    while(count < 10){
            while (indice < tamanho){
                printf("%c", vetor[indice]);
                indice++;
            }
        count++;
        indice = 0;
        printf("\n");
    }
}
