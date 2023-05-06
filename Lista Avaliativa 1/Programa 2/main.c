#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;

    printf("Digite o valor de x1: ");
    scanf("%lf", &x1);
    printf("Digite o valor de y1: ");
    scanf("%lf", &y1);
    printf("Digite o valor de x2: ");
    scanf("%lf", &x2);
    printf("Digite o valor de y2: ");
    scanf("%lf", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos P1(%.2lf,%.2lf) e P2(%.2lf,%.2lf) eh: %.4lf\n", x1, y1, x2, y2, distancia);

    return 0;
}

