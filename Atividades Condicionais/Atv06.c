#include <stdio.h>
#include <ctype.h>

int main ()
{
    float altura, pesoIdeal;
    char sexo;
    
    printf("Digite seu sexo (F/M)\n");
    scanf("%c", &sexo);
    sexo = toupper(sexo);
    printf("Digite sua altura em metros\n");
    scanf("%f", &altura);

    if (sexo =='F')
    {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal = %.2f", pesoIdeal);
    }
    else if(sexo == 'M')
    {
        pesoIdeal = (72.7 * altura) - 58;
        printf("Seu peso ideal = %.2f", pesoIdeal);
    }
    else
    {
        printf("Sexo invalido");
    }
}