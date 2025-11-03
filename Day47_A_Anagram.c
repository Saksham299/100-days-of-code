// Q93. Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0}, i = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0') {
        if (isalpha(str1[i]))
            freq[tolower(str1[i]) - 'a']++;
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        if (isalpha(str2[i]))
            freq[tolower(str2[i]) - 'a']--;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}

/*
Sample Test Case:
Input:
listen
silent
Output: Anagrams
*/
