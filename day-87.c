//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!
*/

#include <stdio.h>
#include <string.h>

typedef enum {
    ADMIN,
    USER,
    GUEST,
    INVALID
} UserRole;

int main() {
    char inputRole[20];
    UserRole currentRole = INVALID;

    scanf("%s", inputRole);

    if (strcmp(inputRole, "ADMIN") == 0) {
        currentRole = ADMIN;
    } else if (strcmp(inputRole, "USER") == 0) {
        currentRole = USER;
    } else if (strcmp(inputRole, "GUEST") == 0) {
        currentRole = GUEST;
    }

    switch (currentRole) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid Role\n");
            break;
    }

    return 0;
}
