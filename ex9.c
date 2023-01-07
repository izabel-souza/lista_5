#include <stdio.h> <stdlib.h> <string.h>
#define X 80

typedef struct endereco {
    char cidade[X];
    char rua[X];
    int numero;
} End;

typedef struct info {
    char nome[X];
    End *casa;
    int telefone;
} Info;

void impressao(Info *vetor);
int main (void) {

    Info *vetor = (Info*) malloc(sizeof(Info));
    if(vetor == NULL) { printf("Falta de memoria"); exit(1); }
    vetor->casa = (End*) malloc(sizeof(End));
    printf("Informe nome: ");
    scanf(" %79[^\n]%c", vetor->nome);
    printf("Informe o telefone para contato: ");
    scanf("%d", &vetor->telefone);
    printf("Informe cidade: ");
    scanf(" %79[^\n]%c", vetor->casa->cidade);
    printf("Informe rua: ");
    scanf(" %79[^\n]%c", vetor->casa->rua);
    printf("Informe numero da residencia: ");
    scanf("%d", &vetor->casa->numero);
    impressao(vetor);
  
    free(vetor);

    return 0;
}

void impressao(Info *vetor) {
    printf("INDIVIDUO: %s:\nTELEFONE %d\nCIDADE: %s\nRUA: %s\nNUMERO: %d", vetor->nome, vetor->telefone, vetor->casa->cidade, vetor->casa->rua, vetor->casa->numero);
}