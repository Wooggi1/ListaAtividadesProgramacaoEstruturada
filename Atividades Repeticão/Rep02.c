#include <stdio.h>

int main () {
    int num, fim = -1;

    printf("Digite um valor N\n");
    scanf("%d", &num);

    while (num != fim)
    {
        printf("%d\n", num);
        num--;
    } 
}