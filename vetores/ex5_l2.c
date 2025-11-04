#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "intArray.h"

int main(void){
    int vetorA[100],i,vetorB[80],posVetorB;
    char repete;

    do{
        posVetorB=0;

        addIntArrayItemsInfSup(vetorA,100,50,50);
        printf("\nvetor a\n");
        printIntArray(vetorA, 100);

        for(i=0;i<100;i++){
            if(vetorA[i]>=0){
                vetorB[posVetorB]=vetorA[i];
                posVetorB++;
            }
        }

        printf("\nvetor b\n");
        printIntArray(vetorB, posVetorB+1);

        printf("\nrepetir? (s/S)");
        scanf(" %c", &repete);
    } while(repete=='s'||repete=='S');

    return 0;
}
