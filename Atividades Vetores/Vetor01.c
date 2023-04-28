#include <stdio.h>

int main()
{
    int notas[30];

    for (int i = 0; i < 30; i++)
    {
        printf("Digite a nota do aluno %d\n", i+1);
        scanf("%d", &notas[i]);
    }
}