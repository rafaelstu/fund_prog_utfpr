#include <stdio.h>

int main(void){
    int vetor1[5], vetor2[5], length, i;

    length = sizeof(vetor1) / sizeof(vetor1[0]);

    for(i=0; i<length; i++){
        scanf("%d", &vetor1[i]);
        vetor2[i] = vetor1[i]*2;
    }

    printf("VETOR1\n");
    for(i=0;i<length;i++){
        printf("%d ",vetor1[i]);
    }

    printf("\n\nVETOR2\n");
    for(i=0;i<length;i++){
        printf("%d ", vetor2[i]);
    }

    return 0;
}
