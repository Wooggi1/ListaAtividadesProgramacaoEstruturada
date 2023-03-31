#include <stdio.h>
#include <math.h>

int main ()
{
    float num;

    printf("Digite um numero\n");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("Quadrado: %.1f\nRaiz: %.1f", pow(num, 2), sqrt(num));
    }
}