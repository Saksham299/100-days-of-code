// Q124 (File Handling)
// Take two filenames from user – source and destination.
// Copy all content from source to destination using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char source[50], destination[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", destination);

    src = fopen(source, "r");
    if(src == NULL) {
        printf("Source file not found!\n");
        return 1;
    }

    dest = fopen(destination, "w");
    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);
    printf("File copied successfully!\n");
    return 0;
}
