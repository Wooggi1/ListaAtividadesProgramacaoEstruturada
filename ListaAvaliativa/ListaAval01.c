#include <stdio.h>

int main () 
{
    int a, b, c, d;
    float diferenca;

    printf("Digite o valor A\n");
    scanf("%d", &a);
    printf("Digite o valor B\n");
    scanf("%d", &b);
    printf("Digite o valor C\n");
    scanf("%d", &c);
    printf("Digite o valor D\n");
    scanf("%d", &d);

    diferenca = (a * b) - (c * d);

    printf("Diferenca = %.1f", diferenca);
}