#include <stdio.h>

void clear(void) {
    while (getchar() != '\n');
}

int contarPalavras(char str[]) {
    int i = 0, palavras = 0, inWord = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            if (inWord == 0) {
                inWord = 1;
                palavras++;
            }
        } else {
            inWord = 0;
        }
        i++;
    }
    return palavras;
}

void mostrarPrimeiroCaractere(char str[]) {
    int i = 0, inWord = 0;
    printf("Primeiro caractere de cada palavra da string: ");
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            if (inWord == 0) {
                inWord = 1;
                printf("%c ", str[i]);
            }
        } else {
            inWord = 0;
        }
        i++;
    }
    printf("\n");
}

void mostrarUltimoCaractere(char str[]) {
    int i = 0;
    printf("Ultimo caractere de cada palavra da string: ");
    while (str[i] != '\0') {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
            printf("%c ", str[i]);
        }
        i++;
    }
    printf("\n");
}

void copiarPrimeiraPalavra(char str[], char primeira[]) {
    int i = 0, j = 0;

    while (str[i] == ' ') {
        i++;
    }

    while (str[i] != ' ' && str[i] != '\0') {
        primeira[j] = str[i];
        i++;
        j++;
    }
    primeira[j] = '\0';
}

int main(void) {
    char string[101], primeiraPalavra[101], repete;
    int i, numPalavras;

    do {
        printf("Informe uma string de ate 100 caracteres: ");
        fgets(string, 100, stdin);

        i = 0;
        while (string[i] != '\n' && string[i] != '\0') {
            i++;
        }
        string[i] = '\0';

        numPalavras = contarPalavras(string);
        printf("\"%s\" possui %d palavras\n", string, numPalavras);

        mostrarPrimeiroCaractere(string);

        mostrarUltimoCaractere(string);

        copiarPrimeiraPalavra(string, primeiraPalavra);
        printf("Primeira palavra da string: %s\n", primeiraPalavra);

        printf("\nDeseja repetir o programa (S/s)? ");
        scanf(" %c", &repete);
        clear();

    } while (repete == 's' || repete == 'S');

    return 0;
}
