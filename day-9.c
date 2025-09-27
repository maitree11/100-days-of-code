// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex
*/

#include <stdio.h>
#include <math.h>
int main () {

int a, b, c;
printf("enter the coefficients: ");
scanf("%d %d %d", &a, &b, &c);

float D, x1, x2;           // discriminant, root1, root2
D = b*b - 4*a*c;
x1 = (-b + sqrt(D))/2*a;
x2 = (-b - sqrt(D))/2*a;
    
if (D > 0) {
    printf("real and distinct roots: %.2f and %.2f\n", x1, x2);
} else if (D == 0) {
    printf("real and equal roots: %.2f\n", x1);
} else {
    printf("roots are complex and imaginary\n");
}    
return 0;
}













// Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
// 90-100: Grade A 
// 80-89: Grade B 
// 70-79: Grade C 
// 60-69: Grade D 
// below 60: Grade F.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F
*/

#include <stdio.h>
int main () {

float percentage;
printf("enter your percentage: ");
scanf("%f", &percentage);

if (percentage >= 90 && percentage <=100) {
   printf("Grade A");
} else if (percentage >= 80 && percentage <= 89) {
   printf("Grade B");
} else if (percentage >= 70 && percentage <= 79) {
   printf("Grade C");
} else if (percentage >= 60 && percentage <= 69) {
   printf("Grade D");
} else {
   printf("Grade F");
}
  
return 0;
}

