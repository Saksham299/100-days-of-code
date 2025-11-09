// Q114 (Logic Enhancers)
// Write a program to take a string s as input.
// The task is to find the length of the longest substring without repeating characters.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    int n = strlen(s), maxLen = 0;

    for(int i = 0; i < n; i++) {
        int freq[256] = {0}, len = 0;
        for(int j = i; j < n; j++) {
            if(freq[(unsigned char)s[j]]) break;
            freq[(unsigned char)s[j]] = 1;
            len++;
            if(len > maxLen) maxLen = len;
        }
    }
    printf("%d\n", maxLen);
    return 0;
}
