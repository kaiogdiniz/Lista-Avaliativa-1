#include <stdio.h>

int main() {
    int n, i;
    int fib[2] = {0, 1};
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    if (n == 0) {
        printf("O termo 0 da sequencia de Fibonacci: 0\n");
        return 0;
    }
    
    for (i = 2; i <= n; i++) {
        int proximo = fib[0] + fib[1];
        fib[0] = fib[1];
        fib[1] = proximo;
    }
    
    printf("O termo %d da sequencia de Fibonacci: %d\n", n, fib[1]);

    return 0;
}

