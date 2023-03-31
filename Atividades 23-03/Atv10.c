#include <stdio.h>

int main ()
{
    float altura, peso;

    printf("Digite sua altura em metros\n");
    scanf("%f", &altura);
    printf("Digite seu peso em KG\n");
    scanf("%f", &peso);

    if (altura < 1.2 && peso < 60)
    {
        printf("Classificacao A");
    }
    else if (altura >= 1.2&& altura <= 1.7 && peso < 60)
    {
        printf("Classificacao B");
    }
    else if (altura > 1.7 && peso < 60)
    {
        printf("Classificacao C");
    }
    else if (altura < 1.2 && peso >= 60 && peso <= 90 )
    {
        printf("Classificacao D");
    }
    else if (altura >= 1.2 && altura <= 1.7 && peso >= 60 && peso <= 90)
    {
        printf("Classificacao E");
    }
    else if (altura > 1.7 && peso >= 60 && peso <= 90)
    {
        printf("Classificacao F");
    }
    else if (altura < 1.2 && peso > 90)
    {
        printf("Classificacao G");
    }
    else if (altura >= 1.2 && altura <= 1.7 && peso > 90)
    {
        printf("Classificacao H");
    }
    else if (altura > 1.7 && peso > 90)
    {
        printf("Classificacao I");
    }
}