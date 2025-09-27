// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral
   
Input 2:
3 3 4
Output 2:
Isosceles
  
Input 3:
2 3 4
Output 3:
Scalene
*/

#include <stdio.h>
#include <math.h>
int main() {        

float a, b, c;
printf("enter three sides of the triangle: ");
scanf("%f %f %f", &a, &b, &c);

if (a==b && b==c && c==a) {                            // for equilateral
   printf("the triangle is equilateral\n");
} else if (a==b || b==c || c==a) {                     // for isosceles
   printf("the triangle is isosceles\n");
} else {                                               // for scalene
   printf("the triangle is scalene\n");
}

return 0;
}













// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday
*/

#include <stdio.h>
int main() {

int num;
printf("enter a number between 1 and 7 to find the day of the week: ");
scanf("%d", &num);

switch (num) {
case 1:
  printf("It's Monday\n");
  break;
case 2: 
  printf("It's Tuesday\n");
  break;
case 3: 
  printf("It's Wednesday\n");
  break;
case 4: 
  printf("It's Thursday\n");
  break;
case 5: 
  printf("It's Friday\n");
  break;
case 6: 
  printf("It's Saturday\n");
  break;
case 7: 
  printf("It's Sunday\n");
  break;
default:
  printf("invalid, please enter a number between 1 and 7");
  break;
}
 
return 0;
}