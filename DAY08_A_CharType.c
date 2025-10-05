/*
Q15 (Conditional Statements)
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (isupper((unsigned char)ch))
        printf("%c is an Uppercase alphabet.\n", ch);
    else if (islower((unsigned char)ch))
        printf("%c is a Lowercase alphabet.\n", ch);
    else if (isdigit((unsigned char)ch))
        printf("%c is a Digit.\n", ch);
    else
        printf("%c is a Special character.\n", ch);

    return 0;
}