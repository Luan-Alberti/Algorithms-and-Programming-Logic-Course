#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a % b == 0 || b % a == 0) {
        printf("Os n�meros s�o m�ltiplos um do outro.\n");
    } else {
        printf("Os n�meros n�o s�o m�ltiplos um do outro.\n");
    }
    return 0;
}
