#include <stdio.h>
#include <string.h>

int main () {
    
    char nome[80];
    float salarioFixo, salarioFinal;
    float vendas;

    printf("Digite seu nome inteiro\n");
    gets(nome);
    printf("Digite seu salario fixo\n");
    scanf("%f", &salarioFixo);
    printf("Digite a quantidade de vendas em reais\n");
    scanf("%f", &vendas);

    salarioFinal = salarioFixo + (vendas * 0.15);

    printf("Ao final do mes o funcionario %s deve receber R$%.2f", nome, salarioFinal);
    return 0;
}