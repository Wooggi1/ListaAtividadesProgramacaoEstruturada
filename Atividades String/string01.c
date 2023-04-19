#include <stdio.h>
#include <string.h>

int main () {
    char nome[100];
    int counter = 0;

    printf("Digite seu nome completo\n");
    fgets(nome, 100, stdin);
    fflush(stdin);

    for (int i = 0; i < strlen(nome); i++)
    {
        if (nome[i] == ' ' || nome[i] == '\0')
        {
            continue;
        }
        counter++;
    }

    printf("Seu nome tem %d caracteres", counter - 1);
}