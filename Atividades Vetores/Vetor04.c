#include <stdio.h>
//arrumo mais tarde
int main(){
    int vetor[80], posicoes[80], numero, contador = 0;
    int tamanho;

    printf("Digite o tamanho desejado para o vetor");
    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("\nDigite o elemento da posicao %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero desejado\n");
    scanf("%d", &numero);

    for(int i = 0; i < 80; i++)
    {
        if (numero == vetor[i]){
            posicoes[contador] = i;
            contador += 1;
        }
    }

    printf("O numero %d foi encontrado %d vezes no vetor\n", numero, contador);

    for (int i = 0; i < contador; i++)
    {
        printf("O numero %d foi encontrado na posicao %d\n", numero, posicoes[i]);
    }

}