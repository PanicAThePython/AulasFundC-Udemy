#include <stdio.h>;
#include <stdlib.h>;

void RealizarTabuada(int num, int limite){

    int cont = 0;

    while (cont <= limite){
        printf("%d X %d = %d \n", num, cont, num*cont);
        cont++;
    }

}

void main(){

    int num;
    int limite;
    printf("Insira o numero da tabuada: ");
    scanf("%d", &num);
    printf("Insira o limite: ");
    scanf("%d", &limite);
    printf("\n");
    printf("Tabuada do %d \n", num);
    printf("----------------\n");
    RealizarTabuada(num, limite);

}
