#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    char cor[30];

    printf("Digite uma cor\n");
    fgets(cor, 30 , stdin);
    cor[0] = toupper(cor[0]);

    if (strcmp(cor, "Branco\n") == 0)
    {
        printf("A cor = branca");
    }
    else if (strcmp(cor, "Verde\n") == 0)
    {
        printf("A cor = verde");
    }
    else if (strcmp(cor, "Amarelo\n") == 0)
    {
        printf("A cor = amarelo");
    }
    else
    {
        printf("A cor nn foi validada");
    }
}