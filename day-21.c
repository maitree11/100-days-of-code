//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>
int main() {
    int n, first, last, temp, place = 1;
    printf("enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10;      // Get last digit

    // Find first digit and place value
    while (temp >= 10) {
        temp /= 10;
        place *= 10;
    }
    first = temp;          // First digit stored

    // Remove first and last digit from original number
    int middle = n % place;        // removes first digit
    middle = middle / 10;          // removes last digit

    // Assemble the new number
    int swapped = last * place + middle * 10 + first;

    printf("%d", swapped);

    return 0;
}














//Q42 Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    // Find sum of all proper divisors
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    // Check if sum equals the number
    if (sum == n)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}
