// Q85. Reverse a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = 0;
    while (str[len] != '\0' && str[len] != '\n')
        len++;

    for (i = 0; i < len; i++)
        rev[i] = str[len - i - 1];
    rev[len] = '\0';

    printf("Reversed string: %s\n", rev);
    return 0;
}

/*
Sample Test Case:
Input:  Hello
Output: Reversed string: olleH
*/
