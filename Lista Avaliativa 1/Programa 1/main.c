#include <stdio.h>

int main() {
    int a, b, c, d, diferenca;
    
    printf("Coloque o valor de A: ");
    scanf("%d", &a);
    
    printf("Coloque o valor de B: ");
    scanf("%d", &b);
    
    printf("Coloque o valor de C: ");
    scanf("%d", &c);
    
    printf("Coloque o valor de D: ");
    scanf("%d", &d);
    
    diferenca = (a * b - c * d);
    
    printf("DIFERENCA = (%d * %d - %d * %d)\n", a, b, c, d);
    printf("DIFERENCA = (%d)", diferenca);
    
    return 0;
}

