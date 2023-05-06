#include <stdio.h>

float media_recursiva(int n) {
    if (n == 0) {
        return 0;
    }
    
    int num;
    scanf("%d", &num);
    
    float media = media_recursiva(n - 1);
    
    return media + (float)num / 10;
}

int main() {
    printf("Digite 10 numeros inteiros:\n");
    
    float media = media_recursiva(10);
    
    printf("A media dos numeros digitados: %.2f", media);
    
    return 0;
}

