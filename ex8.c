#include <stdio.h> <stdlib.h> <string.h>
#define X 20

void avaliacao(char *p1, char *p2);

int main (void) {

    char palavra_p[X], palavra_s[X];
    printf("Informe uma palavra: ");
    scanf(" %19[^\n]%c", palavra_p);
    printf("Informe outra palavra: ");
    scanf(" %19[^\n]%c", palavra_s);
    avaliacao(palavra_p, palavra_s);

    return 0;
}

void avaliacao(char *p1, char *p2) {

    int contador = 0;
    for(int i = 0; p1[i] != '\0'; i++) {
        if(p1[i] == p2[i]) {
            contador++;
        }
    }
    if(contador == strlen(p1) && contador == strlen(p2)) {
        printf("Sao iguais");
    }
    if(contador >= 2) {
        printf("Sao substrings");
    }

}

//possivel uso das funcoes: strcmp e strstr