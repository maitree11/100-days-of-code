/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345

Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345
*/

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); 
    }

    return 0;
}














/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Note: Spaces indicate indentation.
*/

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j < i; j++) {
            printf("  "); 
        }
        for (j = 5; j >= i; j--) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}
