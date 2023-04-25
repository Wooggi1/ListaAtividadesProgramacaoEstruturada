#include <stdio.h>

int main()
{
    int num;

    printf("Digite o valor desejado\n");
    scanf("%d", &num);

    if(num%3 == 0 && !(num%5 == 0))
    {
        printf("Divisivel por 3\n");
    }
    else if(num%5 == 0 && !(num%3 == 0))
    {
        printf("Divisivel por 5\n");
    }
    else{
        printf("Nao atende aos requisitos\n");
    }
    
}