#include <stdio.h>

int main()
{
    int notas[50], quantAlunos;

    printf("Digite a quantidade de alunos\n");
    scanf("%d", &quantAlunos);

    for (int i = 0; i < quantAlunos; i++)
    {
        printf("\nDigite a nota do aluno %d: ", i+1);
        scanf("%d", &notas[i]);
    }
}