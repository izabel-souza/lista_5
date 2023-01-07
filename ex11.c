#include <stdio.h> <stdlib.h> <string.h> <conio.h>
#define MAX 20

void reverso(char *string);

int main (void) {

    char string[MAX];
    printf("Informe uma string: ");
    scanf(" %19[^\n]%c", string);
    reverso(string);

    return 0;
}

void reverso(char *string) {
    int tamanho = strlen(string);
    for(int i = tamanho; i >= 0; i--) {
        printf("%c", string[i]);
    }
}