//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6
*/

#include <stdio.h>
int main() {

int n, fact = 1;

printf("enter a number:"); 
scanf("%d", &n);

for (int i = 1; i <= n; i++) {
  fact *= i;
}   

printf("factorial of %d is %d\n", n, fact);

return 0;
}
















// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/

#include <stdio.h>
int main () {
    
int num, rev=0;
    
printf("enter a number: ");
scanf("%d", &num);
    
int rem = num;
  for(; num > 0 ;){
   rev = rev * 10 + num % 10;
   num = num / 10;
}    
    
printf("reversed number of %d is %d \n", rem , rev);
    
return 0;
}
