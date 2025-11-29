// Day 82 - A132 (Enum)
// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

enum TrafficLight {RED, YELLOW, GREEN};

int main() {
    enum TrafficLight t;
    for (t = RED; t <= GREEN; t++) {
        if (t == RED)
            printf("RED -> Stop\n");
        else if (t == YELLOW)
            printf("YELLOW -> Wait\n");
        else
            printf("GREEN -> Go\n");
    }
    return 0;
}
