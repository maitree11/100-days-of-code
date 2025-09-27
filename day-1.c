// Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19
*/

#include <stdio.h>

int main() {
int a;
int b;

printf("Enter first number: ");
scanf("%d", &a);

printf("Enter second number: ");
scanf("%d", &b);

int sum = a + b;

printf("The sum of %d and %d is %d\n", a, b, sum);

return 0;
}








// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/

#include <stdio.h>

int main() {
int a;
int b;

printf("enter first number: ");
scanf("%d", &a);

printf("enter second number: ");
scanf("%d", &b);

int sum = a + b;
int diff = a - b;
int product = a * b;
int quotient = a / b;

printf("sum of %d and %d is %d\n", a, b, sum);
printf("diff of %d and %d is %d\n", a, b, diff);
printf("product of %d and %d is %d\n", a, b, product);
printf("quotient of %d and %d is %d\n", a, b, quotient);

return 0;
}

