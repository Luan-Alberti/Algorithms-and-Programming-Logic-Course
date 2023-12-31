#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double raio, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    area = (raio * raio) * 3.14159;

    printf("AREA = %.3lf", area);


    return 0;
}
