//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/

#include <stdio.h>
int main() {
    int a, b, i, hcf;           //using formula a*b = lcm*hcf
    printf("enter num1: ");
    scanf("%d", &a);
    printf("enter num2: ");
    scanf("%d", &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    
    int lcm = (a * b) / hcf;

    printf("LCM is %d", lcm);
    return 0;
}















//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27
*/

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        sum = sum + (n % 10);   // add sum to the last digit and then remove the last digit till 0 remains
        n = n / 10;           // last digit removed because it becomes a float value and int cannot read that
    }
    
    printf("sum of digits is %d", sum);
    return 0;
}
