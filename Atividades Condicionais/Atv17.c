#include <stdio.h>

void AbrirMenu(){
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
}

int main() 
{
    int opcao;
    float num1, num2, result;

    AbrirMenu();
    scanf("%d", &opcao);

    printf("Digite o primeiro numero\n");
    scanf("%f", &num1);
    printf("Digite o segundo numero\n");
    scanf("%f", &num2);

    switch (opcao)
    {
    case 1:
        result = num1 + num2;
        printf("resultado: %.1f", result);
        break;
    case 2:
        result = num1 - num2;
        printf("resultado: %.1f", result);
        break;
    case 3:
        result = num1 * num2;
        printf("resultado: %.1f", result);
        break;
    case 4:
        result = num1 / num2;
        printf("resultado: %.1f", result);
        break;
    default:
        printf("Opcao invalida\n");
        break;
    }
}