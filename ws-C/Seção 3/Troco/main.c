#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double preco, quantidade, dinheiro, troco;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%lf", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco =  dinheiro - (preco * quantidade);

    printf("TROCO = R$%.2lf", troco);

    return 0;
}
