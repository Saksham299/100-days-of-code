// Q122 (File Handling)
// Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets().
// Print all lines until EOF.

#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    fp = fopen("info.txt", "r");
    if(fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("File contents:\n");
    while(fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
