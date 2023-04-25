#include <stdio.h>

int main ()
{
    float notas[10];
    float media, soma = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite a nota %d\n", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma/10;
    printf("Media: %.1f", media);

    return 0;
}