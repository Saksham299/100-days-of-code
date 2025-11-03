// Q96. Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[200];
    char *word_start = NULL, *temp = str;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (*temp) {
        if ((word_start == NULL) && (*temp != ' ' && *temp != '\n'))
            word_start = temp;
        if (word_start && (*(temp + 1) == ' ' || *(temp + 1) == '\0' || *(temp + 1) == '\n')) {
            reverse(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }

    printf("Modified sentence: %s", str);
    return 0;
}

/*
Sample Test Case:
Input:  Hello World
Output: Modified sentence: olleH dlroW
*/
