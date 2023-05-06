#include <stdio.h>

int main() {
    int n, maior, menor, primeiro = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    maior = n;
    menor = n;

    while (n >= 0) {
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }

        printf("Digite outro numero inteiro: ");
        scanf("%d", &n);

        primeiro = 0;
    }

    if (primeiro) {
        printf("Nenhum numero foi lido.\n");
    } else {
        printf("O maior numero lido foi: %d\n", maior);
        printf("O menor numero lido foi: %d\n", menor);
    }

    return 0;
}

