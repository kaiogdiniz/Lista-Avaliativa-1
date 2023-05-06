#include <stdio.h>

int main() {
    int num, j;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    printf("Os divisores do numero %d sao: ", num);

    for (j = 1; j <= num; j++) {
        if (num % j == 0) {
            printf("%d ", j);
        }
    }

    return 0;
}

