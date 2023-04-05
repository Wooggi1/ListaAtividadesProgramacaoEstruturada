#include <stdio.h>

int main () {

    int x;
    float fl;
    double duplo;
    char letra;
    char string[100];

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
    fgets(string, 100, stdin);

    printf("Numero inteiro: %3d", x);
    printf("\nNumeros reais:\n%.3f\n%.3lf", fl, duplo);
    printf("\nLetra: %c", letra);
    printf("\nString: %s", string);
    printf("Endereco: %x", &x);
    return 0;
}