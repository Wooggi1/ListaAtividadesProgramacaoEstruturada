#include <stdio.h>

int main() {
    int ddd;

    printf("Digite o DDD: ");
    scanf("%d", &ddd);

    switch (ddd)
    {
    case 61:
        printf("\nBrasilia\n");
        break;
    case 71:
        printf("Salvador\n");
        break;
    case 11:
        printf("Sao Paulo\n");
        break;
    case 21:
        printf("Rio de Janeiro\n");
        break;
    case 32:
        printf("Juiz de Fora\n");
        break;
    case 19:
        printf("Campinas\n");
        break;
    case 27:
        printf("Vitoria\n");
        break;
    case 31:
        printf("Belo Horizonte");
        break;
    default:
        printf("Uma cidade no Brasil sem identificacao");
        break;
    }
}