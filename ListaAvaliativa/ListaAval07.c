#include <stdio.h>

int main() {
    int valor, termo1 = 0, termo2 = 1, proximoTermo;

    printf("Digite um valor\n");
    scanf("%d", &valor);

    if(valor == 0)
    {
        printf("0");
    }

    if(valor == 1)
    {
        printf("1");
    }

    for (int i = 2; i <= valor; i++)
    {
        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    printf("Enesimo termo: %d", proximoTermo);
}