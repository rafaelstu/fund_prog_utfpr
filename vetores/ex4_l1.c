#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "intArray.h"

int main(void){
    int tamA, tamB, low, high, i;

    srand(time(NULL));

    printf("informe o tamanho do vetor a: ");
    scanf("%d", &tamA);

    printf("informe o tamanho do vetor B: ");
    scanf("%d", &tamB);

    int vetorA[tamA], vetorB[tamB];

    addIntArrayItemsFrom1(vetorA, tamA, 20);
    printf("va\n");
    printIntArray(vetorA, tamA);

    addIntArrayItemsFrom1(vetorB, tamB, 15);
    printf("va\n");
    printIntArray(vetorB, tamB);

    if(tamA>tamB){
        high=tamA;
        low=tamB;
    } else {
        low=tamA;
        high=tamB;
    }

    int vetorC[high];

    for(i=0;i<low;i++){
        if(vetorA[i]>vetorB[i]){
            vetorC[i]=1;
        } else if(vetorA[i]<vetorB[i]){
            vetorC[i]=-1;
        } else {
            vetorC[i]=0;
        }
    }

    if(high==tamA){
        for(i=low;i<high;i++){
            vetorC[i]=1;
        }
    } else{
        for(i=low;i<high;i++){
            vetorC[i]=-1;
        }
    }

    printf("vc\n");
    printIntArray(vetorC, high);

    return 0;
}
