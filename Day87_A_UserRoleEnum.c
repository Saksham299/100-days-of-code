// Day 87 - A137 (Enum)
// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum Role {ADMIN, USER, GUEST};

int main() {
    enum Role r;
    for (r = ADMIN; r <= GUEST; r++) {
        if (r == ADMIN)
            printf("ADMIN: Full access\n");
        else if (r == USER)
            printf("USER: Limited access\n");
        else
            printf("GUEST: Guest access\n");
    }
    return 0;
}
