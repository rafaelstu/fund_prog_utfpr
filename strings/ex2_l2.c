#include <stdio.h>

void clear(void) {
    while (getchar() != '\n');
}

int contemSubstring(char str[], char sub[]) {
    int i = 0, j = 0, k;

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == sub[0]) {
            k = i;
            j = 0;
            while (sub[j] != '\n' && sub[j] != '\0' && str[k] == sub[j]) {
                k++;
                j++;
            }
            if (sub[j] == '\0' || sub[j] == '\n') {
                return 1;
            }
        }
        i++;
    }
    return 0;
}

int main(void) {
    char string[101], substring[101], repete;
    int i;

    do {
        printf("Informe uma string: ");
        fgets(string, 100, stdin);

        printf("Informe uma substring: ");
        fgets(substring, 100, stdin);

        i = 0;
        while(string[i] != '\n' && string[i] != '\0') {
            i++;
        }
        string[i] = '\0';

        i = 0;
        while(substring[i] != '\n' && substring[i] != '\0') {
            i++;
        }
        substring[i] = '\0';


        if (contemSubstring(string, substring) == 1) {
            printf("\nA substring \"%s\" faz parte da string \"%s\".\n", substring, string);
        } else {
            printf("\nA substring \"%s\" nao faz parte da string \"%s\".\n", substring, string);
        }

        printf("\nDeseja repetir o programa (S/s)? ");
        scanf(" %c", &repete);
        clear();

    } while (repete == 's' || repete == 'S');

    return 0;
}
