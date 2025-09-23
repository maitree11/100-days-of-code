// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/

/*
#include <stdio.h>
#include <math.h>
int main() {

float P, R, T, SI, CI, A;                 // principal, rate, time, simple interest, compound interest, amount

printf("enter the principal amount: ");
scanf("%f", &P);

printf("enter the rate of interest (in percent): ");
scanf("%f", &R);

printf("enter the time period (in years): ");
scanf("%f", &T);

SI = (P * R * T) / 100.0;
A = P * pow((1 + R / 100.0), T);
CI = A - P;

printf("for, principal amount %.2f for %.2f years at the rate of %.2f\n", P, T, R);
printf("simple interest is %.f rs\n", SI);
printf("compound interest is %.2f rs\n", CI);

return 0;
}
*/












// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include <stdio.h>
int main() {

int sec;   

printf("enter time in seconds: ");
scanf("%d", &sec);

int h, m, s;       // hour, minute, second