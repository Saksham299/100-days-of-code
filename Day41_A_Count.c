// Q81. Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0') {
        count++;
    }

    if (str[count - 1] == '\n')
        count--;

    printf("Total characters: %d\n", count);
    return 0;
}

/*
Sample Test Case:
Input:  Hello World
Output: Total characters: 11
*/
