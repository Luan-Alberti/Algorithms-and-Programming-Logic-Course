#include <stdio.h>
#include <stdlib.h>

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    double lar, comp, valor, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &lar);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comp);
    printf("Digite o valor do metro quadrado do terreno: ");
    scanf("%lf", &valor);

    area = lar * comp;
    preco = area * valor;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n", preco);

    return 0;
}
