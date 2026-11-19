#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role role = ADMIN;

    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have standard access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access.\n");
            break;

        default:
            printf("Invalid role.\n");
    }

    return 0;
}
