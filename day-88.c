//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
*/

#include <stdio.h>

enum Colors { RED, GREEN, BLUE, YELLOW, COUNT };

const char* ColorNames[] = { "RED", "GREEN", "BLUE", "YELLOW" };

int main() {
    for (int i = 0; i < COUNT; i++) {
        printf("%s = %d\n", ColorNames[i], i);
    }
    return 0;
}
