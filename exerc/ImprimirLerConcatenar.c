#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //para booleanos

//int � %d
//float � %f
    //.2f = duas casas decimais ap�s a v�rgula
    //ocupa 2x mais mem�ria que o tipo int, pq tem pelo menos duas casas decimais
//char � %c
    //pra letras
    //uso de aspas simples
    //colocar um espa�o antes de %c no scanf
//bool
    //se transformar pra %d, true vira 1 e false vira 0
    //ler no scanf como se fosse um int
//O Buffer � um peda�o da mem�ria respons�vel pelo armazenamento de valores de vari�veis.


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
