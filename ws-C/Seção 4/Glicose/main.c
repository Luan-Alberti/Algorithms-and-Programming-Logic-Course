#include <stdio.h>
#include <stdlib.h>

int main()
{
    int glico;

    printf("Digite a medida da glicose: ");
    scanf("%d", &glico);

    if (glico <= 100){
        printf("\nClassifica��o: Normal\n");
    }
    else if (glico < 140){
        printf("\nClassifica��o: Elevado\n");
    }
    else {
        printf("\nClassifica��o: Diabetes\n");
    }

    return 0;
}
