#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant, cod;
    double preco;

    printf("Digite o código do produto: ");
    scanf("%d", &cod);
    printf("Digite a quantidade a ser comprada: ");
    scanf("%d", &quant);

    switch (cod){
        case 1:
            preco = 5 * quant;
            break;
        case 2:
            preco = 3.5 * quant;
            break;
        case 3:
            preco = 4.8 * quant;
            break;
        case 4:
            preco = 8.9 * quant;
            break;
        case 5:
            preco = 7.32 * quant;
            break;
        default:
            printf("Opção inválida.\n");
    }

    printf("\nValor a pagar = R$%.2lf\n", preco);

    return 0;
}
