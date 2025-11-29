// Day 98 - A148 (Enum)
// Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;

    printf("Enter first employee details:\n");
    scanf("%s %d %f", e1.name, &e1.id, &e1.salary);

    printf("Enter second employee details:\n");
    scanf("%s %d %f", e2.name, &e2.id, &e2.salary);

    if (strcmp(e1.name, e2.name) == 0 && e1.id == e2.id && e1.salary == e2.salary)
        printf("Employees are identical.\n");
    else
        printf("Employees are different.\n");

    return 0;
}
