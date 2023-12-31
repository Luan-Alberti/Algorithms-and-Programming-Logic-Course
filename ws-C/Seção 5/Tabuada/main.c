#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, y;

    printf("Deseja a tabuada para qual valor?");
    scanf("%d", &x);

    for (i = 1; i <= 10; i++) {
        y = x * i;
        printf("%d x %d = %d\n", x, i, y);
    }
    return 0;
}
