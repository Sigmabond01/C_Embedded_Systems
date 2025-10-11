#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int total = 0;
    int i = 1;

    if(argc < 5) {
        printf("Usage: <Name1> <Marks1> Marks2> <Marks> (orivide name and marks of student)\n");
        return 1;
    }
    printf("Student details: \n");
    printf("Name %s\n", argv[i]);
    for(i = 1; i < argc - 1; i++) {
        printf("Marks %d: %s\n", i, argv[i + 1]);
        total = atol(argv[i + 1]);
    }
    printf("Total Marks: %d\n", total);
    return 0;
}