#include <stdio.h>
#include "intArray.h"

int main(void){
    int tam, lim, i, indexMenorValor, menorValor=-1,somaPar=0,countPar=0;

    printf("informe o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam];

    printf("informe o limite dos elementos do vetor: ");
    scanf("%d", &lim);

    addIntArrayItems(vetor, tam, lim);
    if(menorValor==-1){
        menorValor=vetor[0];
        indexMenorValor=0;
    }

    printf("\n======VETOR======\n");
    for(i=0;i<tam;i++){
        printf("%d  ",vetor[i]);
        if(vetor[i]%2==0){
            somaPar+=vetor[i];
            countPar++;
        }
        if(vetor[i]<menorValor){
            menorValor = vetor[i];
            indexMenorValor=i;
        }
    }

    printf("\no menor vlor eh %d e ta no indice %d \n", menorValor, indexMenorValor);

    if(countPar>0){
    printf("media dos pares: %.2f\n", (float)somaPar/countPar);
    } else {
        printf("nenhum par");
    }

    return 0;
}
