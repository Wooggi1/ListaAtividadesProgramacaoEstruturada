#include <stdio.h>
#include <string.h>

int main () {

    int x;
    float fl;
    double duplo;
    char letra;
    char string[30];
    int Hexa;

    printf("Digite o inteiro\n");
    scanf("%d", &x);
    printf("Digite o float\n");
    scanf("%f", &fl);
    printf("Digite o double\n");
    scanf("%lf", &duplo);
    printf("Digite a letra\n");
    scanf(" %c", &letra);
    fflush(stdin);
    printf("Digite a frase\n");
    gets(string);

    printf("Numero inteiro: %d", x);
    printf("\nNumeros reais:\n%.3f\n%.3lf", fl, duplo);
    printf("\nLetra: %c", letra);
    printf("\nString: %s", string);
    printf("\nEndereco: %x", &Hexa);
    return 0;
}