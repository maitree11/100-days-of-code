// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111
*/

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
   if (n == 0) { 
     printf("0");
     return 0;
   }
  
  int binary = 0, place = 1;
  while (n > 0) {
    int digit = n % 2;
    binary = binary + digit * place;
    place = place * 10;
    n = n / 2;
 }

printf("%d", binary);

return 0;
}












//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/

#include <stdio.h>
int main() {
  int n, temp, rev = 0;
  printf("enter a number: ");
  scanf("%d", &n);

  temp = n;   // store the number

  while (temp != 0) {
    rev = rev * 10 + (temp % 10);  // reverse number
    temp = temp / 10;              // remove last digit
  }

  if (rev == n) {
    printf("palindrome");
  } else {
    printf("not palindrome");
    }
return 0;
}
