#include <stdio.h>

int distanceobject() {
    float speed, time, distance;

    printf("Enter speed: ");
    scanf("%f", &speed);

    printf("Enter time: ");
    scanf("%f", &time);

    distance = speed * time;
    printf("Distance is: %f", distance);
}

int main() {
    distanceobject();
}