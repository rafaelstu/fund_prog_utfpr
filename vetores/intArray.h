#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void addIntArrayItems(int vetor[], int tam, int lim){
    int i;

    srand(time(NULL));

    for(i=0;i<tam;i++){
        vetor[i]=rand()%(lim+1);
    }
}

void addIntArrayItemsFrom1(int vetor[], int tam, int lim){
    int i;

    srand(time(NULL));

    for(i=0;i<tam;i++){
        vetor[i]=rand()%lim+1;
    }
}

void printIntArray(int vetor[], int tam){
    int i;

    for(i=0;i<tam;i++){
        printf("%d  ",vetor[i]);
    }
}

void sortIntArray(int vetor[], int tam){
   int aux, i, j;

   for(j=tam-1;j>0;j--){
       for(i=0;i<j;i++){
           if(vetor[i]>vetor[i+1]){
               aux=vetor[i];
               vetor[i]=vetor[i+1];
               vetor[i+1]=aux;
           }
       }
   }
}


int moda(int vetor[], int tam){
    int maisOcorre, i, cont, j, qtdeMaior=0;

    for(i=0;i<tam;i++){
        cont=0;

        for(j=i;j<tam;j++){
            if(vetor[i]==vetor[j]){
                cont++;
            }
        }

        if(cont>qtdeMaior){
            qtdeMaior=cont;
            maisOcorre=vetor[i];
        }
    }

    return maisOcorre;
}

void addIntArrayItemsFrom1WithoutRepeatedNumber(int vetor[], int tam, int lim){
    int i,j;

    if(lim<tam){
        printf("limite do array menor que tamanho do array");
        return;
    }

    srand(time(NULL));

    for(i=0;i<tam;i++){
        vetor[i]=rand()%lim+1;

        for(j=0;j<i;j++){
            if(vetor[i]==vetor[j]){
                i--;
                break;
            }
        }
    }
}

void geraTabuada(int num){
    int i;

    printf("\n\nTABUADA DO %d\n", num);
    for(i=0;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
}
