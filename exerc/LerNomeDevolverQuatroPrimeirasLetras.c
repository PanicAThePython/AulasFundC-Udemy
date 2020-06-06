#include <stdio.h>
#include <stdlib.h>

void main(){

    int tamanho;
    int i;

    printf("Insira o tamanho do seu nome: ");
    printf("\n");
    scanf("%d", &tamanho);

    char vetor[tamanho];

    for (i = 0; i < tamanho; i++){
        printf("%da letra: ", i+1);
        scanf(" %c",&vetor[i]);
    }

    printf("\nAs quatro primeiras letras sao: \n");
    printf("%c", vetor[0]);
    printf("%c",vetor[1]);
    printf("%c",vetor[2]);
    printf("%c",vetor[3]);

    printf("\n\nLetras em posicoes pares: \n");
    for (i = 0; i < tamanho; i++){
        if (i%2==0){
            printf("%c", vetor[i]);
        }
    }
    printf("\n\nLetras em posicoes impares: \n");
    for (i = 0; i < tamanho; i++){
        if (i%2==1){
            printf("%c", vetor[i]);
        }
    }
    printf("\n");
}
