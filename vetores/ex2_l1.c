#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "intArray.h"

int main(void){
    int tam, lim, i, aux, tamPar, tamImp;

    srand(time(NULL));

    printf("informe o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam], vetorPar[tam], vetorImpar[tam];

    printf("informe o limite dos elementos do vetor: ");
    scanf("%d", &lim);

    for(i=0;i<tam;i++){
        aux=(rand()%(lim+1))+1;
        vetor[i]=aux;
        if(aux%2==0){
            vetorPar[tamPar]=aux;
            tamPar++;
        } else{
            vetorImpar[tamImp]=aux;
            tamImp++;
        }

    }

    printf("\n\n\nvetores\n");
    printIntArray(vetor,tam);
    printf("\n\n\nvetores par\n");
    printIntArray(vetorPar,tamPar);
    printf("\n\n\nvetores impar\n");
    printIntArray(vetorImpar,tamImp);


    return 0;
}
