#include <stdio.h>

int main() {
    float precoAbacaxi = 5.0;
    float precoMaca = 1.0;
    float precoPera = 4.0;
    int opcao, quantidade;
    float total = 0.0;

    while (1) {
        printf("Escolha uma opcao de fruta:\n");
        printf("1 => ABACAXI - %.2f a unidade\n", precoAbacaxi);
        printf("2 => MACA - %.2f a unidade\n", precoMaca);
        printf("3 => PERA - %.2f a unidade\n", precoPera);

        printf("Opcao escolhida (ou 0 para finalizar): ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break;
        }

        printf("Quantidade desejada: ");
        scanf("%d", &quantidade);

        switch (opcao) {
            case 1:
                total += precoAbacaxi * quantidade;
                break;
            case 2:
                total += precoMaca * quantidade;
                break;
            case 3:
                total += precoPera * quantidade;
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    }

    printf("Valor total da compra: %.2f\n", total);

    return 0;
}
