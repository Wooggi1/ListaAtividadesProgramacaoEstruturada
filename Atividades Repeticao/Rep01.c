#include <stdio.h>

int main (){
    int numero, fim = 0;

    printf("Digite um numero N\n");
    scanf("%d", &numero);

    while (fim != numero)
    {
        fim++;
        printf("%d\n", fim); 
    }
}