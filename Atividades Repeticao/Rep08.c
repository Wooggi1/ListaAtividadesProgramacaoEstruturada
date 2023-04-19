#include <stdio.h>

int main ()
{
    float media;
    int num, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma += num;
    }
    media = soma/10;
    printf("A media: %.1f", media);
}