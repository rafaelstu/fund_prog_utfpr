#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "intArray.h"

int main(void){
    int vetor[5],i;
    char repete;

    srand(time(NULL));
    do{
        addIntArrayItemsFrom1WithoutRepeatedNumber(vetor, 5, 9);
        printIntArray(vetor, 5);

        for(i=0;i<5;i++){
            geraTabuada(vetor[i]);
        }

        printf("\nrepetir? (s/S)");
        scanf(" %c", &repete);
    } while(repete=='s'||repete=='S');

    return 0;
}
