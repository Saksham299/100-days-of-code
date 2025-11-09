// Q121 (File Handling)
// Write a C program that creates a text file named info.txt in write mode.
// Take user’s name and age as input, and write them using fprintf().
// After writing, display a confirmation message.

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");
    if(fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("Data successfully saved to info.txt\n");
    return 0;
}
