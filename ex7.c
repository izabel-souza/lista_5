#include <stdio.h> <stdlib.h> <string.h>
#define X 80

void abreviacao(char *nome);

int main (void) {

    char nome[X];
    printf("Informe um nome completo: ");
    scanf(" %79[^\n]%c", nome);
    abreviacao(nome);

    return 0;
}

void abreviacao(char *nome) {

    char *nome_abreviado = (char *) malloc(X * sizeof(int));
    if(nome_abreviado == NULL) { printf("Falta de memoria"); exit(1); }
    nome_abreviado[0] = nome[0];
    nome_abreviado[1] = '.';
    int aux = 2;
    
    for(int i = 1; nome[i] != '\0'; i++) {
        if(nome[i] >= 'A' && nome[i] <= 'Z') {
            nome_abreviado[aux] = nome[i];
            aux++;
            nome_abreviado[aux] = '.';
          aux++;
        }
    }
    printf("%s", nome_abreviado);

  }