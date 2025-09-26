#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, disc, r1, r2, real, imag;

    printf("Enter coefficientrs of a,b,c: ");
    scanf("%1f %1f %1f", &a, &b, &c);

    disc = b * b - 4 * a * c;

    if(disc > 0) {
        r1 = (-b + sqrt(disc) / (2 * a));
        r2 = (-b + sqrt(disc) / (2 * a));
        printf("r1 = %.21f and r2 = %.21f", r1, r2);
    }

    else if (disc == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("r1 = r2 = %.21f", r1);
    }

    else {
        real = -b / (2 * a);
        printf("r1 = %.21f + %.21f & r2 = %.21f - %.21f", real, imag, real, imag);
    }

    return 0;   
}