//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>
int main () {
  int n;
  printf( "enter a number: ");
  scanf("%d", &n);

  int num=n;
  int Armstrong=0;
  for(; num>0; num = num / 10) {
    int digit = num%10;
    Armstrong = Armstrong + digit*digit*digit;
  }

  if (Armstrong==n) {
    printf("%d is an armstrong number", n);
  } else {
      printf("%d is not an armstrong number", n);
    }
 return 0;
}

















//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime
*/

#include <stdio.h>
int main() {
    int n, i;
    printf("enter a number: ");
    scanf("%d", &n);

    if (n<=1) {
        printf("the number is not prime.");
        return 0;
    }
    
    for (i=2; i <= n/2; i++) {
        if (n % i == 0) {
            printf("the number is not prime.");
        } else {
            printf("the number is prime.");
        }
        return 0;
    }
    return 0;
}
