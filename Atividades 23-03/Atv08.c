#include <stdio.h>
#include <string.h>

int main ()
{
    float produto, valorFinal;
    char estado[2];

    printf("Digite um dos estados Listados\n\tMG\tSP\n\tRJ\tMS\n");
    fgets(estado, 3, stdin);
    printf("Digite o valor do produto\n");
    scanf("%f", &produto);
    
    if (strcmp(estado, "MG") == 0)
    {
        valorFinal = produto + (produto*0.07);
        printf("Valor final: %.1f", valorFinal);
    }
    else if (strcmp(estado, "SP") == 0)
    {
        valorFinal = produto + (produto*0.12);
        printf("Valor final: %.1f", valorFinal);
    }
    else if (strcmp(estado, "RJ") == 0)
    {
        valorFinal = produto + (produto*0.15);
        printf("Valor final: %.1f", valorFinal);
    }
    else if (strcmp(estado, "MS") == 0)
    {
        valorFinal = produto + (produto*0.08);
        printf("Valor final: %.1f", valorFinal);
    }
    else
    {
        printf("ERRO\nEstado invalido");
    }
}