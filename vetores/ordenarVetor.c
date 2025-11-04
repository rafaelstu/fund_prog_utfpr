#include <stdio.h>
#include "intArray.h"

int main(void){
    int tam, lim, i;

    printf("informe o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam];

    printf("informe o limite dos elementos do vetor: ");
    scanf("%d", &lim);

    addIntArrayItems(vetor, tam, lim);

    printf("\n======VETOR======\n");
    printIntArray(vetor, tam);

    sortIntArray(vetor, tam);

    printf("\n\n\n======VETOR ORDENEDS======\n");
    printIntArray(vetor, tam);

    return 0;
}
