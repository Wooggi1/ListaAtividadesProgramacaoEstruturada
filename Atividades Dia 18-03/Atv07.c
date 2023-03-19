#include <stdio.h>

int main () {

    int a;
    int b;
    int prod;

    printf("Digite um numero\n");
    scanf("%d", &a);
    printf("Digite o segundo numero\n");
    scanf("%d", &b);

    prod = a * b;

    printf("prod = %d", prod);
    return 0;
}