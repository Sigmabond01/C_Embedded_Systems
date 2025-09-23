/*C progrm to calculate simple ineterest*/

#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    printf("\nEnter principal: ");
    scanf("%f", &principal);

    printf("\nEnter rate: ");
    scanf("%f", &rate);

    printf("\nEnter time: ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;
    printf("The simple interest is: %f", interest);

    return 0;
}