#include <stdio.h>

int main () {

    int a;
    int b;
    int x;

    printf("Digite um numero\n");
    scanf("%d", &a);
    printf("Digite o segundo numero\n");
    scanf("%d", &b);
    
    x = a + b;

    printf("%d + %d = %d", a, b, x);
    return 0;
}