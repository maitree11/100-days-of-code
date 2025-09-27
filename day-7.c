// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year
   
Input 3:
2000
Output 3:
Leap year
*/

#include <stdio.h>
int main() {
 
int y;
printf("enter a year: ");
scanf("%d", &y);

if (y%400 == 0){
   printf("%d is a leap year\n", y);
} else if (y%100 == 0) {
   printf("%d is NOT a leap year\n", y);
} else if (y%4 == 0) {
   printf("%d is a leap year\n", y);
} else {
   printf("%d is NOT a leap year\n", y);
}
return 0;
}











// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant
*/

#include <stdio.h>
int main() {
   
char chr;
printf("enter a character: ");
scanf("%c", &chr);
   
if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U') {
   printf("%c is a vowel\n", chr);
} else {
   printf("%c is a consonant\n", chr);
}
   
return 0;
}
