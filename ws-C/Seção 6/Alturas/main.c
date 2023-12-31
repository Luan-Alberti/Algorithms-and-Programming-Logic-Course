#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int main()
{
    int N;
    double media, soma, menor, per;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);
    limpar_entrada();

    char nome[N][50];
    int idade[N];
    double altura[N];

    for (int i = 0; i < N; i++){
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        fgets(nome[i], sizeof(nome[i]), stdin);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
        limpar_entrada();
    }

    soma = 0;
    for (int i = 0; i < N; i++){
        soma = soma + altura[i];
    }

    media = soma / N;
    printf("\nAltura média: %.2lf\n", media);

    menor = 0.0;
    for (int i = 0; i < N; i++){
        if (idade[i] < 16){
            menor = menor + 1;
        }
    }

    per = menor * 100.0 / N;
    printf("Pessoas com menos de 16 anos: %.1lf%%", per);

    for (int i = 0; i < N; i++){
        if(idade[i] < 16){
            printf("\n%s", nome[i]);
        }
    }

    printf("\n");

    return 0;
}
