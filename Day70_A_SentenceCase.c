// Q120 (File Handling)
// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    int n = strlen(str);
    int capitalize = 1;

    for(int i = 0; i < n; i++) {
        if(capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }
        if(str[i] == '.' || str[i] == '?' || str[i] == '!') capitalize = 1;
    }

    printf("%s\n", str);
    return 0;
}
