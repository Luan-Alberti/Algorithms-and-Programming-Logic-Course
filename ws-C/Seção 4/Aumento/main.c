#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salarioAt, salarioNovo, aumento, perc;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salarioAt);

    if (salarioAt <= 1000){
        perc = 20;
    }
    else if (salarioAt <= 3000){
        perc = 15;
    }
    else if (salarioAt <= 8000){
        perc = 10;
    }
    else {
        perc = 5;
    }

    aumento = salarioAt * perc / 100;
    salarioNovo = salarioAt + aumento;

    printf("\nNovo salário = R$%.2lf\nAumento = R$%.2lf\nPorcentagem = %.0lf\n", salarioNovo, aumento, perc);

    return 0;
}
