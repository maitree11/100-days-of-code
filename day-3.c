// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100   
Output 2:
Fahrenheit=212
*/


#include <stdio.h>
int main() {

int Celsius;
int Fahrenheit;

printf("enter temperature in celsius: ");
scanf("%d", &Celsius);
 
int F;
F = ( Celsius * 9 / 5 ) + 32;

printf("the converted temperature is %d\n", F);

return 0;
}









// Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:   
After swap: 1 -1
*/


#include <stdio.h>
int main() {
 
int a;
int b;

printf("enter a: ");
scanf("%d", &a);

printf("enter b: ");
scanf("%d", &b);

printf("initially a = %d, b = %d\n", a, b);
  
int temp;
temp = a;
a = b;
b = temp;

printf("now a = %d, b = %d", a, b);

return 0;
}

