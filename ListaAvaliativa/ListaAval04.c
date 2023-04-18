<<<<<<< HEAD
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
=======
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
>>>>>>> 3f42a1fb65f4acf42b9c778f91180ac9962c5d3e
}