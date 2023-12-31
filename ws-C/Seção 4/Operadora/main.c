#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min, valor;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &min);

    valor = 50;

    if (min > 100){
        valor = valor + 2 * (min - 100);
    }

    printf("Valor a pagar: R$%d,00", valor);

    return 0;
}
