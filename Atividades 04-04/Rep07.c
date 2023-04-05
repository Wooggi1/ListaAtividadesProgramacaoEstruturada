#include <stdio.h>

int main ()
{
    int num, soma = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &num);
        soma += num;
    }

    printf("Soma: %d", soma);
}