#include <stdio.h>

int main() {
    int chem, eng, phy, math, comp;
    float total, average, percentage;

    printf("Enter your marks: ");
    scanf("%d %d %d %d %d", &eng, &phy, &math, &comp, &chem);

    total = eng + phy + chem + math + comp;

    average = total / 5.0;

    percentage = (total / 500.0) * 100;

    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);
    printf("Percentage: %.2f\n", percentage);

    return 0;
}