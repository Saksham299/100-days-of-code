// Day 93 - A143 (Enum)
// Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5], top;
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    top = s[0];
    for (int i = 1; i < 5; i++) {
        if (s[i].marks > top.marks)
            top = s[i];
    }

    printf("\nTop Student:\nName: %s, Roll No: %d, Marks: %.2f\n", top.name, top.roll_no, top.marks);
    return 0;
}
