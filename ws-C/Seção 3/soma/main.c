#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    soma = x + y;

    printf("\nSOMA = %d", soma);

    return 0;
}
