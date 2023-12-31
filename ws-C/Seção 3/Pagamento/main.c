#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    double valor, hora, pagamento;


    printf("Nome: ");
    gets(nome);
    printf("Valor por hora: ");
    scanf("%lf", &valor);
    printf("Horas trabalhadas: ");
    scanf("%lf", &hora);

    pagamento = valor * hora;

    printf("O pagamento para %s deve ser de R$ %.2lf", nome, pagamento);


    return 0;
}
