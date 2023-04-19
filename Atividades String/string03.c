#include <stdio.h>
#include <string.h>

int main () {
    char nome[100], endereco[100], email[100];
    char BakNome[100], BakEndereco[100], BakEmail[100];

    printf("Digite seu nome\n");
    fgets(nome, 100, stdin);
    printf("Digite seu endereco\n");
    fgets(endereco, 100, stdin);
    printf("Digite seu email\n");
    fgets(email, 100, stdin);

    strcpy(BakNome, nome);
    strcpy(BakEmail, email);
    strcpy(BakEndereco, endereco);
}