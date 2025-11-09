// Q126 (File Handling)
// Ask the user for a filename. Check if it exists by opening in read mode.
// If file pointer is NULL, print an error message; else, read and display its content.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], ch;

    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");

    if(fp == NULL) {
        printf("Error: File does not exist.\n");
        return 1;
    }

    printf("File content:\n");
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
