#include <stdio.h>

int main() {
    int opcao;
    float valor_total = 0;

    do {
        printf("Digite a opcao desejada:\n");
        printf("1 - Abacaxi - 5,00 a unidade\n");
        printf("2 - Maca - 1,00 a unidade\n");
        printf("3 - Pera - 4,00 a unidade\n");
        printf("4 - Finalizar Compra\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a quantidade de abacaxis:\n");
                int abacaxis;
                scanf("%d", &abacaxis);
                valor_total += abacaxis * 5;
                break;

            case 2:
                printf("Digite a quantidade de macas:\n");
                int macas;
                scanf("%d", &macas);
                valor_total += macas;
                break;

            case 3:
                printf("Digite a quantidade de peras:\n");
                int peras;
                scanf("%d", &peras);
                valor_total += peras * 4;
                break;

            case 4:
                printf("Compra realizada. Valor total:R$ %.2f\n", valor_total);
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}

