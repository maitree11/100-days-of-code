//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed
*/

#include <stdio.h>
#include <string.h>

// 1. Define the Enum
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[20];
    enum Status currentStatus;
    int isValid = 1; // A flag to check if input matches our list

    // 2. Input
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    scanf("%s", input);

    // 3. Translate String -> Enum
    if (strcmp(input, "SUCCESS") == 0) {
        currentStatus = SUCCESS;
    } 
    else if (strcmp(input, "FAILURE") == 0) {
        currentStatus = FAILURE;
    } 
    else if (strcmp(input, "TIMEOUT") == 0) {
        currentStatus = TIMEOUT;
    } 
    else {
        isValid = 0; // The user typed something else
    }

    // 4. Switch Logic
    if (isValid == 1) {
        switch(currentStatus) {
            case SUCCESS:
                printf("Operation successful\n");
                break;
            case FAILURE:
                printf("Operation failed\n");
                break;
            case TIMEOUT:
                printf("Operation timed out\n");
                break;
        }
    } else {
        printf("Invalid status entered.\n");
    }

    return 0;
}
