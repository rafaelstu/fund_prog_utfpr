#include <stdio.h>

void clear (void){
    while(getchar() != '\n');
}

int main(void){
    char string[101], repete;
    int vogais[5], i;
    do{
        for(i=0;i<5;i++){
            vogais[i]=0;
        }
        i=0;

        printf("informe um texto com ate 100 caracteres: ");
        fgets(string, 100, stdin);

        while (string[i]!='\n') {
            if(string[i]=='a'||string[i]=='A'){
                vogais[0]++;
            }
            if(string[i]=='e'||string[i]=='E'){
                vogais[1]++;
            }
            if(string[i]=='i'||string[i]=='I'){
                vogais[2]++;
            }
            if(string[i]=='o'||string[i]=='O'){
                vogais[3]++;
            }
            if(string[i]=='u'||string[i]=='U'){
                vogais[4]++;
            }
            i++;
        }

        printf("VOGAL\tQUANTIDADE\n");
        printf("=====================\n");

        printf("A/a\t\t%d\n", vogais[0]);
        printf("E/e\t\t%d\n", vogais[1]);
        printf("I/i\t\t%d\n", vogais[2]);
        printf("O/o\t\t%d\n", vogais[3]);
        printf("U/u\t\t%d\n", vogais[4]);

        printf("deseja repetiero? (s/S): ");
        scanf(" %c", &repete);

        clear();

    } while (repete=='s'||repete=='S');

    return 0;
}
