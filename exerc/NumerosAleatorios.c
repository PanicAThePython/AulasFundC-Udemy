#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    srand((unsigned) time(NULL));

    int aleatorio = rand() % 3; //numero aleatorio entre 0 e 2
    int ale = (rand() % 5) + 1; //numero aleatorio entre 1 e 4


    printf("%d", aleatorio);
    printf("\n");
    printf("%d", ale);

}
