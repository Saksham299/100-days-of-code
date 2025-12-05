/* 
    Day 100
    Q150 (Enum)

    📌 Question:
    Use pointer to struct to modify and display data using -> operator.

    📌 Task:
    - Create a structure
    - Create a structure variable
    - Create a pointer to structure
    - Modify data using -> operator
    - Display modified data using -> operator
*/

#include <stdio.h>

struct Student {
    char name[20];
    int age;
    float marks;
};

int main() {
    // Structure variable
    struct Student s1 = {"Rahul", 18, 85.50};

    // Pointer to structure
    struct Student *ptr = &s1;

    // Modify values using -> operator
    ptr->age = 20;
    ptr->marks = 92.75;

    // Display values using -> operator
    printf("Modified Student Details:\n");
    printf("Name  : %s\n", ptr->name);
    printf("Age   : %d\n", ptr->age);
    printf("Marks : %.2f\n", ptr->marks);

    return 0;
}
