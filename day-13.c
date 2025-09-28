//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/

#include <stdio.h>
int main() {

char op;        //operator
int a, b;

printf("enter first number: ");
scanf ("%d", &a) ;

printf("enter operator (+,-.*,/,%%) : ");
scanf(" %c", &op);

printf("enter second number: ");
scanf ("%d", &b) ;

int sum, diff, product, remainder; 
float quotient;
switch (op) {
case '+':
    sum = a + b;
    printf ("ans = %d", sum) ;
    break;
case '-':
    diff = a - b;
    printf ("ans = %d", diff);
    break;
case '*':
    product = a * b;
    printf ("ans = %d", product);
    break;
case '/':
    if (b != 0) {
    quotient = (float)a / b;
    printf( "ans = %.2f", quotient);
    } else {
      printf("division by 0 is undefined");
      break;
    }
case '%' :
     if (b != 0) {
    remainder = a % b;
    printf ("ans = %d", remainder);
    } else {
      printf ("division by 0 is undefined");
    break;
    }

default:
printf( "invalid operator");
}

return 0;
}





















//Q26: Write a program to print numbers from 1 to n.
/*
Sample Test Cases:
Input 1:
5
Output 1: 12 345
Input 2:
3
Output 2:
1 2 3
*/

#include <stdio.h>
int main() {

int n; 
int i;

printf("enter a positive number (n): ");
scanf ("%d", &n);

printf ("Printing numbers from 1 to %d: \n", n);
for (i = 1; i <= n; i++) {

printf("%d ", i);
}

return 0;
}