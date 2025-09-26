/*
A structure in C is a collection of variables, possibly of different types,
under a single name. Each member of the structure is allocated its own memory space,
and the size of the structure is the sum of the sizes of all its members.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
  
    // Create a structure variable
    struct Student s1 = {"Nice", 10, 80};

    // Access structure members
    printf("%s\n", s1.name);
    printf("%d\n", s1.age);
    printf("%.2f\n", s1.grade);
  	printf("Size: %d bytes", sizeof(s1));

    return 0;
}