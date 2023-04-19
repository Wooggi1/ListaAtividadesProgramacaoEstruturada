#include <stdio.h>

int main ()
{
    int num1, num2;

    printf("Digite o primeiro numero\n");
    scanf("%d", &num1);
    printf("Digite o segundo numero\n");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        printf("%d maior que %d", num1, num2);
    }
    else
    {
        printf("%d maior que %d", num2, num1);
    }
    return 0;
}