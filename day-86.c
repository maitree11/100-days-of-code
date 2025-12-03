//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/

#include <stdio.h>

typedef enum {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
} Operation;

int main() {
    int choice;
    int num1, num2;
    int result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Choose operation:\n");
    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch ((Operation)choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
