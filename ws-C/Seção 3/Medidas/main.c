#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, areaA, areaB, areaC;

    printf("Digite a medida de A: ");
    scanf("%lf", &a);
    printf("Digite a medida de B: ");
    scanf("%lf", &b);
    printf("Digite a medida de C: ");
    scanf("%lf", &c);

    areaA = a * a;
    areaB = (a * b) / 2;
    areaC = ((a + b) * c) / 2;

    printf("AREA DO QUADRADO: %.4lf\n", areaA);
    printf("AREA DO TRIANGULO: %.4lf\n", areaB);
    printf("AREA DO TRAPEZIO: %.4lf\n", areaC);

    return 0;
}
