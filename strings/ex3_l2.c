#include <stdio.h>

void clear (void){
    while(getchar() != '\n');
}

int main(void){
    int i=0,cont=0;
    char string1[101], string2[101];

    printf("informe uma string: ");
    fgets(string1, 100, stdin);

    printf("informe outra string: ");
    fgets(string2, 100, stdin);

    while (string1[i]!='\n') {
        printf("%c",string1[i]);
        i++;
    }
    printf(" %s",string2);

    return 0;
}
