#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, troca, i, soma;

    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y){
        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;

    for(i = x+1; i < y; i++){
        if (i % 2 != 0){
            soma = soma + i;
        }
    }

    printf("Soma dos impares = %d", soma);

    return 0;
}
