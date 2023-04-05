
#include <stdio.h>

int main () {

    int a, b, c, d;
    int diff;

    printf("Digite o valor A\n");
    scanf("%d", &a);
    printf("Digite o valor B\n");
    scanf("%d", &b);
    printf("Digite o valor C\n");
    scanf("%d", &c);
    printf("Digite o valor D\n");
    scanf("%d", &d);

    diff = (a * b - c * d);

    printf("DIFERENCA = (%d * %d - %d * %d)\n", a, b, c, d);
    printf("DIFERENCA = %d", diff);
    return 0;
}