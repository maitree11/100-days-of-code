//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go
*/

#include <stdio.h>
#include <string.h> 

int main() {
    char inputColor[20]; 

    printf("Enter a traffic light color (red, yellow, green): ");
    
    scanf("%s", inputColor);

    if (strcmp(inputColor, "red") == 0) {
        printf("Stop\n");
    }
    else if (strcmp(inputColor, "yellow") == 0) {
        printf("Wait\n");
    }
    else if (strcmp(inputColor, "green") == 0) {
        printf("Go\n");
    }
    else {
        printf("Invalid signal (Make sure to type in lowercase)\n");
    }

    return 0;
}
