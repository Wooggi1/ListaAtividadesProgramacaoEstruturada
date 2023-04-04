#include <stdio.h>
#include <string.h>

int main() {
    char primeiro_nome[50], nome_do_meio[50], ultimo_nome[50], nome_completo[150];

    printf("Digite seu primeiro nome: ");
    scanf("%s", primeiro_nome);

    printf("Digite seu(s) nome(s) do meio (se houver): ");
    scanf("%s", nome_do_meio);

    printf("Digite seu último nome: ");
    scanf("%s", ultimo_nome);

    strcpy(nome_completo, primeiro_nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, nome_do_meio);
    strcat(nome_completo, " ");
    strcat(nome_completo, ultimo_nome);

    printf("Seu nome completo e: %s\n", nome_completo);

    return 0;
}
