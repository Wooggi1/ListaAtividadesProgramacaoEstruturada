#include <stdio.h>

int main () {
    int num = 0, maiorNum = 0, menorNum = 99999;

    while (num > -1)
    {
        printf("Digite um valor\n");
        scanf("%d", &num);

        if (num > maiorNum)
            maiorNum = num;
        
        if (num < menorNum)
            menorNum = num;
    }

    printf("Maior numero: %d\n", maiorNum);
    printf("Menor numero: %d\n", menorNum);
}