#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50], cpf[20], senha[30];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("Digite seu CPF: ");
    scanf("%s", cpf);

    strcpy(senha, nome);
    strncat(senha, sobrenome, 1);
    strcat(senha, cpf);
    strncat(senha, cpf + 1, 2);

    printf("Sua senha e: %s\n", senha);

    return 0;
}
