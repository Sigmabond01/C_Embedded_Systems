#include <stdio.h>
#include <math.h>

int main() {
    double n;

    printf("Enter your number: ");
    scanf("%lf", &n);

    printf("\nYou entered %.1f \n", n);

    n = sqrt(n);

    printf("Square root is: %.1f\n", n);

    return 0;
}
