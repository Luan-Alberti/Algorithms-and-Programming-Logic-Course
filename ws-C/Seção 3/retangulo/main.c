#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double B, h, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &B);
    printf("Altura do retangulo: ");
    scanf("%lf", &h);

    area = B * h;
    perimetro = 2 * (B + h);
    diagonal = sqrt(pow(B, 2) + pow(h, 2));

    printf("\nAREA = %lf\n", area);
    printf("PERIMETRO = %lf\n", perimetro);
    printf("DIAGONAL = %lf\n", diagonal);

    return 0;
}
