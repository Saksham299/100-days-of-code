// Q98. Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100], *token, *lastWord;
    char copy[100];

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    strcpy(copy, name);

    token = strtok(copy, " ");
    lastWord = token;
    while (token != NULL) {
        lastWord = token;
        token = strtok(NULL, " ");
    }

    token = strtok(name, " ");
    while (token != NULL) {
        if (strcmp(token, lastWord) != 0)
            printf("%c.", toupper(token[0]));
        else
            printf("%s", lastWord);
        token = strtok(NULL, " ");
    }

    printf("\n");
    return 0;
}

/*
Sample Test Case:
Input:  Saksham Kumar Verma
Output: S.K.Verma
*/
