#include <stdio.h>
#include <stdlib.h>

int main()
{
    double preco, din, troco;
    int quant;

    printf("Preço unitário do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quant);
    printf("Dinheiro recebido: ");
    scanf("%lf", &din);


    troco = din - (preco * quant);

    if (troco < 0){
        printf("\nDINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS.\n", -troco);
    }
    else{
        printf("\nTROCO = R$%.2lf\n", troco);
    }

    return 0;
}
