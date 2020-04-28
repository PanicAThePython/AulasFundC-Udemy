#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //para booleanos

//int é %d
//float é %f
    //.2f = duas casas decimais após a vírgula
    //ocupa 2x mais memória que o tipo int, pq tem pelo menos duas casas decimais
//char é %c
    //pra letras
    //uso de aspas simples
    //colocar um espaço antes de %c no scanf
//bool
    //se transformar pra %d, true vira 1 e false vira 0
    //ler no scanf como se fosse um int
//O Buffer é um pedaço da memória responsável pelo armazenamento de valores de variáveis.


void main(){
    int a = 5, b;
    //imprimindo
    printf("%d", a);

    printf("\n");

    //concatenando
    printf("O valor de a eh: %d", a);

    printf("\nEntre com o valor de b: ");

    printf("\n");

    //lendo
    scanf("%d", &b);

    //concatenando
    printf("O valor de b eh: %d", b);

}
