// Day 85 - A135 (Enum)
// Assign explicit values starting from 10 and print them.

#include <stdio.h>

enum Numbers {TEN=10, ELEVEN, TWELVE, THIRTEEN};

int main() {
    enum Numbers n;
    for (n = TEN; n <= THIRTEEN; n++) {
        printf("%d\n", n);
    }
    return 0;
}
