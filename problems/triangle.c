#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter length of three sides: \n");
    
    printf("Side a: ");
    scanf("%f", &a);

    printf("Side b: ");
    scanf("%f", &b);

    printf("Side c: ");
    scanf("%f", &c);

    s = (a + b+ c / 2);
    
    area = sqrt(s* (s - a)*(s - b)* (s - c));
    printf("Area of the triangle is: %f", area);

    return 0;
}