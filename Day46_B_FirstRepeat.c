// Q92. Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i = 0, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] == 1) {
                printf("First repeating character: %c\n", str[i]);
                found = 1;
                break;
            }
            freq[str[i] - 'a']++;
        }
        i++;
    }

    if (!found)
        printf("No repeating lowercase character found.\n");

    return 0;
}

/*
Sample Test Case:
Input:  apple
Output: First repeating character: p
*/
