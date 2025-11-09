// Q127 (File Handling)
// Read text from input.txt, convert all lowercase letters to uppercase, and write to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    if(in == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    out = fopen("output.txt", "w");
    while((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    fclose(in);
    fclose(out);
    printf("Conversion completed. Check output.txt\n");
    return 0;
}
