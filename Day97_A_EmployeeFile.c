// Day 97 - A147 (Enum)
// Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp;

    // Input employee
    printf("Enter name: ");
    scanf("%s", e.name);
    printf("Enter ID: ");
    scanf("%d", &e.id);
    printf("Enter salary: ");
    scanf("%f", &e.salary);

    // Write to file
    fp = fopen("employee.dat", "wb");
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Read from file
    struct Employee r;
    fp = fopen("employee.dat", "rb");
    fread(&r, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee from file:\nName: %s\nID: %d\nSalary: %.2f\n", r.name, r.id, r.salary);

    return 0;
}
