// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days
*/

#include <stdio.h>
int main() {
  
int num;
printf("enter a number between 1 and 12 to find the month: ");
scanf("%d", &num);
 
switch (num) {
case 1:  
  printf("January, 31 days");
  break;
case 2:
  printf("February, 28 days");
  break;
case 3:
  printf("March, 31 days");
  break;
case 4: 
  printf("April, 30 days");
  break; 
case 5:
  printf("May, 31 days");
  break;
case 6:
  printf("June, 30 days");
  break;
case 7:
  printf("July, 31 days");
  break;
case 8:
  printf("August, 31 days");
  break;
case 9:
  printf("September, 30 days");
  break;
case 10:
  printf("October, 31 days");
  break;
case 11:
  printf("November, 30 days");
  break;
case 12:
  printf("December, 31 days");
  break;
default: 
  printf("invalid, enter a number between 1 and 12");
  break;
}

return 0;
}















// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/

#include <stdio.h>
int main() {

float CP, SP, A;          //cost price, selling price, amount
printf("enter the cost price: ");
scanf("%f", &CP);
printf("enter the selling price: ");
scanf("%f", &SP);

if (SP>CP) {              //profit
  A = SP - CP;
  float profitpercent = (A/CP) * 100;
  printf("profit = %.2f\n", A);     
  printf("profit percentage = %.2f\n", profitpercent);   
} else if (CP>SP) {       //loss
    A = CP - SP;
    float losspercent = (A/CP) * 100;
    printf("loss = %.2f\n", A);
    printf("loss percentage = %.2f\n", losspercent);
} else {
    printf("neither profit, nor loss");
}

return 0;
}
