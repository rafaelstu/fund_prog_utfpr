#include <stdio.h>

int main(void){
    float nota1[5], nota2[5], media[5];
    int i=0;

    for(i=0;i<5;i++){
        printf("informe a nota para a posição %d do vetor nota1: ",i);
        scanf("%f", &nota1[i]);
    }



    for(i=0;i<5;i++){
        printf("informe a nota para a posição %d do vetor nota2: ",i);
        scanf("%f", &nota2[i]);
    }

    printf("\n\nnOTAS 1\n");
    for(i=0;i<5;i++){
        printf("%.1f ",nota1[i]);
    }

    printf("\n\nnOTAS 2\n");
    for(i=0;i<5;i++){
        printf("%.1f ",nota2[i]);
    }

    printf("\n\nMEDIA");

    for(i=0; i<5; i++){
        media[i] = (nota1[i]+nota2[i])/2;
        printf("%.1f ", media[i]);
    }

    return 0;
}
