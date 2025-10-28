/*
Q14 (Conditional Statements)
Write a program to input a character and check whether it is a vowel or consonant using if-else.
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

    if (!isalpha((unsigned char)ch)) {
        printf("Not an alphabet character.\n");
        return 0;
    }

    ch = tolower((unsigned char)ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("%c is a Vowel.\n", ch);
    else
        printf("%c is a Consonant.\n", ch);

    return 0;
}