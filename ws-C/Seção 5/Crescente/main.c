#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    while (x != y) {
        printf("Digite dois numeros:\n");
        scanf("%d", &x);
        scanf("%d", &y);
        if (x > y) {
            printf("DESCRESCENTE!\n");
        }
        else if (x < y) {
            printf("CRESCENTE!\n");
        }
        else{
            printf("FIM DO PROGRAMA\n");
        }
    }

    return 0;
}
