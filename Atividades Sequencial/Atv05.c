#include <stdio.h>

int main () {

    int a;
    int b;
    
    printf("Digite um numero\n");
    scanf("%d", &a);
    printf("Digite o segundo numero\n");
    scanf("%d", &b);

    printf("%d + %d = %d", a, b, a + b);
    return 0;
}