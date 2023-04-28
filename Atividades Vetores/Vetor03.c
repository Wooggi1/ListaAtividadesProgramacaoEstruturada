#include <stdio.h>

int main(){
    char letras[30];
    int quantidadeLetras;

    printf("Digite quantas letras serao lidas: ");
    scanf("%d", &quantidadeLetras);

    for(int i = 0; i < quantidadeLetras; i++)
    {
        printf("\nDigite a letra %d: ", i+1);
        scanf(" %c", &letras[i]);
    }

    for(int i = quantidadeLetras; i > -1; i--)
    {
        printf("%c ", letras[i]);
    }
}