//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/

#include <stdio.h>
int main() {
    int n;
    int product = 1;
    int lastdigit;

    printf("enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        lastdigit = n % 10;        // extract last digit and store it in a variable

        if (lastdigit % 2 != 0) {  // check if the last digit is odd
            product = product * lastdigit;      // multiply product with this digit
        }

        n = n / 10;       // when this is done, remove last digit. Loop continues till the last digit becomes 0
    }                     // the loop runs and last digits are successively multiplied to the existing product

    printf("%d", product);
    return 0;

}
















//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/

#include <stdio.h>
int main() {
    int n, digit, place = 1, complement = 0;
    printf("enter the number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;          // extract last digit

        if (digit == 0)
            complement = complement + 1 * place;   // flip 0 to 1
        else
            complement = complement + 0 * place;   // flip 1 to 0

        place = place * 10;             // move to next place
        n /= 10;                 // remove last digit
    }

    printf("%d", complement);

    return 0;
}                               // c does not print leading 0s in int so the output may not be desired
