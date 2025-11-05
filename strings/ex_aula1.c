#include <stdio.h>

int stringSize(char str[]){
    int i=0;
    while(str[i]!='\n'){
        i++;
    }

    return i;
}

int stringSizeWithoutSpaces(char str[]){
    int i=0,cont=0;

    while(str[i]!='\n'){
        if(str[i]!=' '){
            cont++;
        }
        i++;
    }

    return cont;

}

void capitalize(char str[]){
    int i=0;

    while(str[i]!='\n'){
        if(str[i]>='a' && str[i]<='z') {
            str[i]-=32;
        }
        i++;
    }
}

void reverse(char str[]){
    int i=0, j=0;

    while(str[i]!='\n'){
        i++;
    }

    char strAux[i+1];

    i--;

    while(i>=0){
        strAux[j]=str[i];
        j++;
        i--;
    }

    strAux[j]='\n';

    i=0;

    while(strAux[i]!='\n'){
        str[i]=strAux[i];
        i++;
    }
    str[i]='\n';
}

int main(void){
    int i=0,cont=0;
    char string[30];

    printf("informe uma string: ");
    fgets(string, 29, stdin);

    while(string[i]!='\n'){
        if(string[i]=='a'){
            cont++;
        }
        i++;
    }


    printf("string informada: %s\n", string);
    printf("quantidade de a minusculo: %d\n", cont);
    printf("tamanho da string: %d\n",stringSize(string));
    printf("tamanho da string sem espaco: %d\n",stringSizeWithoutSpaces(string));

    capitalize(string);

    printf("string em maiusculo: %s", string);

    reverse(string);

    printf("string invertida: %s", string);

    return 0;
}
