// Day 95 - A145 (Enum)
// Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTop(struct Student s[], int n) {
    struct Student top = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks)
            top = s[i];
    }
    return top;
}

int main() {
    struct Student s[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    struct Student top = findTop(s, 5);
    printf("\nTop Student:\nName: %s, Roll No: %d, Marks: %.2f\n", top.name, top.roll_no, top.marks);
    return 0;
}
