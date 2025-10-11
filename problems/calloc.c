#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n, i;
    struct Student *students;

    printf("Enter number of students: ");
    scanf("%d", &n);

    students = (struct Student*)calloc(n , sizeof(struct Student));
    printf("Enter details of students: ");
    for(i = 0; i < n; i++) {
        printf("Student %d name: ", i + 1);
        scanf("%s", &students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    printf("Failed students: ");
    for(i = 0; i < n; i++) {
        if(students[i].marks < 40) {
            printf("Student %d Name: %s, Marks: %d\n", i+1, students[i].name, students[i].marks);
        }
    }
    free(students);

    return 0;
}