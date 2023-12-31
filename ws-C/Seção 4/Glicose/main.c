#include <stdio.h>
#include <stdlib.h>

int main()
{
    int glico;

    printf("Digite a medida da glicose: ");
    scanf("%d", &glico);

    if (glico <= 100){
        printf("\nClassificação: Normal\n");
    }
    else if (glico < 140){
        printf("\nClassificação: Elevado\n");
    }
    else {
        printf("\nClassificação: Diabetes\n");
    }

    return 0;
}
