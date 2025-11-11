#include <stdio.h>

void clear(void) {
    while (getchar() != '\n');
}

int main(void) {
    char inputText[256],repetir;
    int spaceCount[128], i, j, consecutiveSpaces;

    do {
        printf("Informe um texto: ");
        fgets(inputText, 255, stdin);

        i = 0;
        j = 0;
        consecutiveSpaces = 0;

        while (inputText[i] != '\n' && inputText[i] != '\0') {
            if (inputText[i] == ' ') {
                consecutiveSpaces++;
            } else {
                if (consecutiveSpaces > 0) {
                    spaceCount[j] = consecutiveSpaces;
                    j++;
                }
                consecutiveSpaces = 0;
            }
            i++;
        }

        if (consecutiveSpaces > 0) {
            spaceCount[j] = consecutiveSpaces;
            j++;
        }

        printf("\n==== VETOR ====\n");
        for (i = 0; i < j; i++) {
            printf("%d ", spaceCount[i]);
        }
        printf("\n\n");

        printf("Deseja repetir o programa (S/s)? ");
        scanf(" %c", &repetir);
        clear();

    } while (repetir == 's' || repetir == 'S');

    return 0;
}
