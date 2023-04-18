#include <stdio.h>

int main () {
    int numero = 1;
    int soma = 0;

    while(numero != 1000)
    {
        if(numero % 3 == 0 || numero % 5 == 0)
        {
            soma+= numero;
        }
        numero++;
    }
    printf("Soma: %d", soma);
}