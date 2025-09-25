#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, result1, result2, result3, result4;

    printf("Enter value of A:  ");
    scanf("%d", &a);

    printf("Enter value of B:  ");
    scanf("%d", &b);

    printf("Enter value of C:  ");
    scanf("%d", &c);

    printf("Enter value of D:  ");
    scanf("%d", &d);

    printf("Enter value of E:  ");
    scanf("%d", &e);

    printf("Enter value of F:  ");
    scanf("%d", &f);

    printf("Enter value of G:  ");
    scanf("%d", &g);

    result1 = a + b * c + d * e + f * g;

    result2 = a / b * c - b + a * d / 3;

    result3 = a +++ b --- a;

    result4 = (a++) + (++a);

    printf("After evaluaton of result 1 is: %d\n", result1);
    printf("After evaluaton of result 2 is: %d\n", result2);
    printf("After evaluaton of result 3 is: %d\n", result3);
    printf("After evaluaton of result 4 is: %d\n", result4);

    return 0;
}