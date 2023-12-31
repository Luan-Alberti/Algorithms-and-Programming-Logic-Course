#include <stdio.h>
#include <stdlib.h>

int main()
{
    double distancia, combustivel, media;

    printf("Distancia percorrida: ");
    scanf("%lf", &distancia);
    printf("Combustivel gasto: ");
    scanf("%lf", &combustivel);

    media = distancia / combustivel;

    printf("Consumo medio = %.3lf", media);

    return 0;
}
