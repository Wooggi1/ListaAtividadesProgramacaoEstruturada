#include <stdio.h>

int main () {
    int num;

    printf("Digite um numero\n");
    scanf("%d", &num);
    printf("Divisores:");
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf(" %d,", i);
        }
    }
}