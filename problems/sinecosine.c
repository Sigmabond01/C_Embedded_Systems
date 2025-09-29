#include <stdio.h>
#include <math.h>
#define MAX 150
#define PI 3.1416

int cosine() {
    int angle = 0;
    float x, y;

    printf("Cosine angle\n");
    while (angle <= MAX)
    {
        x = (PI/ MAX) * angle;
        y = cos(x);
        printf("\n %15d %13.4f", angle, y);
        angle = angle + 10;
    }
}

int sine() {
    int angle2 = 0;
    float x2, y2;

    printf("sine angle\n");
    while (angle2 <= MAX)
    {
        x2 = (PI/ MAX) * angle2;
        y2 = sin(x2);
        printf("\n %15d %13.4f", angle2, y2);
        angle2 = angle2 + 10;
    }
}

int main() {
    cosine();
    sine();
}