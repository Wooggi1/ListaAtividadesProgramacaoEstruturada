#include <stdio.h>

int main ()
{
    int a, b, c, d;

    printf("Digite o valor A\n");
    scanf("%d", &a);
    printf("Digite o valor B\n");
    scanf("%d", &b);
    printf("Digite o valor C\n");
    scanf("%d", &c);
    printf("Digite o valor D\n");
    scanf("%d", &d);

    if (a > b && d > a && (c + d) > (a + b) && c > 0 && d > 0 && a%2 == 0)
    {
        printf("Valores aceitos");
    }
    else
    {
        printf("Valores nao aceitos");
    }
}