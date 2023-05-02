#include <stdio.h>

int main(){
    int vetor[80], numero, contador = 0;
    int tamanho;

    printf("Digite o tamanho desejado para o vetor: ");
    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("\nDigite o elemento da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero desejado: ");
    scanf("%d", &numero);

    for(int i = 0; i < tamanho; i++)
    {
        if (numero == vetor[i]){
            contador += 1;
            printf("Encontrado nas posicoes %d\n", i);
        }
        else{
            printf("Numero nao encontrado no vetor\n");
            return 0;
        }
    }

    printf("O numero %d foi encontrado %d vezes no vetor\n", numero, contador);

    return 0;
}