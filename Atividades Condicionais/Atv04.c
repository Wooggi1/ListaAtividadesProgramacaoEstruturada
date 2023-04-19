#include <stdio.h>

int main ()
{
    float salario, emprestimo;

    printf("Digite seu salario\n");
    scanf("%f", &salario);
    printf("Digite o valor do emprestimo\n");
    scanf("%f", &emprestimo);

    if (emprestimo > (salario*0.2))
    {
        printf("Emprestimo nao concedido");
    }
    else
    {
        printf("Emprestimo concedido");
    }
}