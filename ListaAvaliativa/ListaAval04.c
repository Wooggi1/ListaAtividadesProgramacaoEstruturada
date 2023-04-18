#include <stdio.h>

int main () 
{
    int x, y;

    printf("Digite o valor de x e y\n");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("O ponto esta no quadrante 1");
    }
    else if (x < 0 && y > 0)
    {
        printf("O ponto esta no quadrante 2");
    }
    else if (x < 0 && y < 0)
    {
        printf("O ponto esta no quadrante 3");
    }
    else if (x > 0 && y < 0)
    {
        printf("O ponto esta no quadrante 4");
    }
    else if (x == 0 && y != 0)
    {
        printf("Eixo X");
    }
    else if (x != 0 && y == 0)
    {
        printf("Eixo Y");
    }
    else if (x == 0 && y == 0)
    {
        printf("Origem");
    }
}