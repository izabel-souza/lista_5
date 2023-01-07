#include <stdio.h> <stdli.h> <string.h>

void contagem_caracteres(char *string, char caractere);

int main (void) {

    char string[20], caractere;
    printf("Informe uma string: ");
    scanf(" %19[^\n]%c", string);
    printf("Informe um caractere: ");
    scanf(" %c", &caractere);
    contagem_caracteres(string, caractere);

    return 0;
}

void contagem_caracteres(char *string, char caractere) {
    int contagem = 0;
    for(int i = 0; string[i] != '\0'; i++) {
        if(string[i] == caractere) {
            contagem++;
        }
    }

    printf("O caractere '%c' aparece %d vezes na string", caractere, contagem);
}   