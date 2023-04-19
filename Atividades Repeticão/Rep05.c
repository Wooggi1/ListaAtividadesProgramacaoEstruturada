#include <stdio.h>

int main ()
{
    int soma = 0, counter = 0;
    int i = 0;
    while (counter != 50)
    {
        i++;
        if (i%2 == 0)
        {
            soma += i;
            counter++;
        }
    }
    printf("a soma dos primeiros 50 numeros pares: %d", soma);
}