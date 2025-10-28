// Q49 (Nested Loops without Arrays/Strings)
// Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345

#include <stdio.h>

int main() {
    int i, j, start;

    for (i = 5; i >= 1; i--) {
        start = i;
        for (j = i; j <= 5; j++) {
            printf("%d", start);
            start++;
        }
        printf("\n");
    }

    return 0;
}
