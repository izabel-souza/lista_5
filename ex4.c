#include <stdio.h> <stdlib.h> <string.h>

void info(char *string);

int main (void) {

    char string[20];
    printf("Informe uma string: ");
    scanf(" %19[^\n]%c", string);
    info(string);

    return 0;
}

void info(char *string) {
    int contagem = 0;
    for(int i = 0; string[i] != '\0'; i++) {
        contagem++;
    }
    printf("Primeiro caractere da string: %c\n Ultimo caractere da string: %c", string[0], string[contagem-1]);
    printf("A string possui %d caracteres", contagem);
}