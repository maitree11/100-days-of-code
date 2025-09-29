//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25
*/

#include <stdio.h>
int main() {

int n;
int sum = 0;    // Initialize sum to 0
int i;          // Loop counter

printf("enter the number of odd numbers for sum (n): ");
scanf("%d", &n);

if (n <= 0) {
printf("Please enter a positive number.\n");
return 1;
}

for (i = 1; i <= n; i++) {
sum = sum + (2 * i - 1);
}

printf("The sum of the first %d odd numbers is: %d\n", n, sum);

return 0;
}
















// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)
*/

#include <stdio.h>
int main() {

int n;
int product = 1;    
int i;              

printf("enter the number for product (n): ");
scanf("%d", &n);

if (n <= 2) {
printf("no even numbers between 1 and 2.\n");
printf("the product is: 1\n");
return 0;
}

for (i = 2; i <= n; i += 2) { 
product = product * i;
}

printf("The product of even numbers between 1 and  %d is: %d\n", n, product);

return 0;
}
