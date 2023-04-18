<<<<<<< HEAD
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
=======
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
>>>>>>> 3f42a1fb65f4acf42b9c778f91180ac9962c5d3e
}