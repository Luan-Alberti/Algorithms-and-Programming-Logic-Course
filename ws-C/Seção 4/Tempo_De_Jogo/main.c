#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horaInicial, horaFinal, duracao;

    printf("Hora Inicial: ");
    scanf("%d", &horaInicial);
    printf("Hora Final: ");
    scanf("%d", &horaFinal);

    if (horaInicial < horaFinal){
        duracao = horaFinal - horaInicial;
    }
    else {
        duracao = 24 - horaInicial + horaFinal;
    }

    if (duracao >= 1 && duracao <= 24){
        printf("\nA duração do jogo foi de %d hora(s).\n", duracao);
    }
    else {
        printf("\nA duração do jogo não é válida.\n");
    }

    return 0;
}
