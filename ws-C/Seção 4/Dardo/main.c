#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;

    printf("Digite as tres distancias: \n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if (a > b && a > c){
        printf("\nMAIOR = %.2lf\n", a);
    }
    else if (b > c){
        printf("\nMAIOR = %.2lf\n", b);
    }
    else {
        printf("\nMAIOR = %.2lf\n", c);
    }
    return 0;
}
