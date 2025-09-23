#include <stdio.h>
#include <math.h>

int main() {
    float principal, time, rate, cl;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    cl = principal * (pow((1 + rate / 100), time));
    printf("Compound intrerest is: %f", cl);
}