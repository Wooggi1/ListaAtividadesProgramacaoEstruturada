#include <stdio.h>

float Geometrica(float x, float y, float z)
{
    float media = x * y * z;
    return media;
}

float Ponderada(float x, float y, float z)
{
    float media;
    media = (x + 2 * y + 3 * z)/6;
    return media;
}

float Harmonica(float x, float y, float z)
{
    float media;
    media = 1 / ((1/x) + (1/y) + (1/z));
    return media;
}

float Aritmetica(float x, float y, float z)
{
    float media;
    media = (x + y + z)/3;
    return media;
}
int main () 
{
    float x, y, z;
    int escolha;

    printf("Digite o valor de X\n");
    scanf("%f", &x);
    printf("Digite o valor de Y\n");
    scanf("%f", &y);
    printf("Digite o valor de Z\n");
    scanf("%f", &z);
    printf("Escolha uma das opções abaixo\n1 - Geometrida\n2 - Ponderada\n3 - Harmonica\n4 - Aritmetica\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Media geometrica: %.2f", Geometrica(x, y, z));
        break;
    case 2:
        printf("Media ponderada: %.2f", Ponderada(x, y, z));
        break;
    case 3:
        printf("Media harmonica: %.4f", Harmonica(x, y, z));
        break;
    case 4:
        printf("Media aritmetica: %.2f", Aritmetica(x, y, z));
        break;
    default:
        printf("Valor invalido");
    }
}