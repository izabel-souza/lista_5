#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define TAMANHO 9

typedef struct cadastro {
    char usuario[TAMANHO];
    char senha[TAMANHO];
} Cadastro;

void cadastrar(Cadastro *pessoa);

int main (void) {

    Cadastro *pessoa = (Cadastro*) malloc(sizeof(Cadastro));
    // Cadastro *verificacao = (Cadastro*) malloc(sizeof(Cadastro));
    if(pessoa == NULL) { printf("Falta de memoria"); exit(1); }
    // if(verificacao == NULL) { printf("Falta de memoria"); exit(1); }
    cadastrar(pessoa);
    // cadastrar(verificacao->usuario);

    return 0;
}

void cadastrar(Cadastro *pessoa) {

    char caractere;
    int contagem = 0, x = 0;
    if(x == 0) {
        printf("Informe usuario: ");
    }
    else {
        printf("Informe senha: ");
    }
    do {
        caractere = getch();
        if((caractere < 'A' && caractere > 'Z') || (caractere < 'a' && caractere > 'z')) {
            break;
        }
        if(x == 0) {
            pessoa->usuario[contagem] = caractere;
            printf("*");
            contagem++;
        }
        else {
            pessoa->senha[contagem] = caractere;
            printf("*");
            contagem++;
        }
    } while (contagem < 8);
    x++;
    pessoa->usuario[9] = '\0';
    pessoa->senha[9] = '\0';
}