// Day 96 - A146 (Enum)
// Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee e;
    printf("Enter name: ");
    scanf("%s", e.name);
    printf("Enter ID: ");
    scanf("%d", &e.id);
    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joiningDate.day, &e.joiningDate.month, &e.joiningDate.year);

    printf("\nEmployee Details:\nName: %s\nID: %d\nJoining Date: %02d-%02d-%04d\n",
           e.name, e.id, e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);

    return 0;
}
