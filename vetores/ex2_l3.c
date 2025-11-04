#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "intArray.h"

int main(void){
    int vetor[10];
    char repete;

    srand(time(NULL));
    do{
        addIntArrayItems(vetor, 10, 5);
        printIntArray(vetor, 10);

        printf("\nmoda do vetor: %d",moda(vetor,10));

        printf("\nrepetir? (s/S)");
        scanf(" %c", &repete);
    } while(repete=='s'||repete=='S');

    return 0;
}
