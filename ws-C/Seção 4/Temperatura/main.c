#include <stdio.h>
#include <stdlib.h>

int main()
{
    double C, F;
    char unidade;

    printf("Digite qual escala de temperatura quer usar (C/F): ");
    scanf("%c", &unidade);

    if (unidade == 'C'){
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &C);
        F = C * 1.8 + 32;
        printf("Temperatura equivalente em Fahrenheit = %.2lf", F);
    }
    else if (unidade == 'F'){
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &F);
        C = (F - 32) / 1.8;
        printf("Temperatura equivalente em Celsius = %.2lf", C);
    }
    else {
        printf("\nEscala de temperatura não reconhecida\n");
    }
    return 0;
}
