// Q125 (File Handling)
// Open an existing file in append mode and allow user to enter a new line of text.
// Append without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "a");

    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    scanf(" %[^\n]", text);

    fprintf(fp, "\n%s", text);
    fclose(fp);

    printf("Text appended successfully!\n");
    return 0;
}
