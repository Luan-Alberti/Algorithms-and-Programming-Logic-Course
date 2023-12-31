#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, notaF;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notaF = nota1 + nota2;

    printf("NOTA FINAL = %.2lf\n", notaF);

    if (notaF < 60) {
        printf("REPROVADO");
    }

    return 0;
}
