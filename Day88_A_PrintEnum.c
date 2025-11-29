// Day 88 - A138 (Enum)
// Print all enum names and integer values using a loop.

#include <stdio.h>

enum Colors {RED, GREEN, BLUE};

int main() {
    enum Colors c;
    const char* names[] = {"RED", "GREEN", "BLUE"};
    
    for (c = RED; c <= BLUE; c++) {
        printf("%s = %d\n", names[c], c);
    }
    return 0;
}
