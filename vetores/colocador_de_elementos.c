#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void addIntElement(int vetor[], int tamanho, int limite){
    int i;

    srand(time(NULL));

    for(i=0;i<tamanho;i++){
        vetor[i] = rand() % (limite+1);
    }
}

void showIntArray(int vetor[], int tamanho){
    int i;

    for(i=0;i<tamanho;i++){
        printf("%d ",vetor[i]);
    }
}


int main(void){
    int tam, limite, i;

    printf("numero tamanho: ");
    scanf("%d",&tam);

    int vetor[tam];

    printf("numero limite: ");
    scanf("%d",&limite);

    addIntElement(vetor, tam, limite);

    showIntArray(vetor,tam);

    return 0;
}
