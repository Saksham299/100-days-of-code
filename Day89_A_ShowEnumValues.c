// Day 89 - A139 (Enum)
// Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Numbers {ONE=1, TWO, THREE};

int main() {
    enum Numbers n;
    for (n = ONE; n <= THREE; n++) {
        printf("%d\n", n);
    }
    return 0;
}

