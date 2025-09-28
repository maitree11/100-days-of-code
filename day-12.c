// Q23: Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled
*/

#include <stdio.h>
int main() {

int days;
float fine;
printf("number of days late: ");
scanf("%d", &days);

if (days > 0 && days <= 5) {
  fine = days * 2;
  printf("fine is ₹%.2f\n", fine);
} else if (days > 5 && days <= 10) {
  fine = (5 * 2) + ((days-5) * 4);
  printf("fine is ₹%.2f\n", fine);
} else if (days > 10 && days <= 30) {
  fine = (5 * 2) + (5 * 4) + ((days-10) * 6);
  printf("fine is ₹%.2f\n", fine);
} else if (days > 30) {
  printf("membership cancelled");
} else { 
  printf("no fine");
} 

return 0;
}


















//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700
*/

#include <stdio.h>
int main() {

int units;
float bill;

printf("enter the amount consumed: ");
scanf("%d", &units);

if (units>0 && units<=100) {
   bill = units * 5;
   printf("bill: ₹%.2f", bill);
} else if (units>100 && units<=200) {
   bill = (100 * 5) + ((units-100) * 7);
   printf("bill: ₹%.2f", bill);
} else if (units>200 && units <= 300) {
   bill = (100 * 5) + (100 * 7) + ((units-200) * 10);
   printf("bill: ₹%.2f", bill);
} else if (units>300) {
   bill = (100 * 5) + (200 * 7) + (300 * 10) + ((units-300) * 12);
   printf("bill: ₹%.2f", bill);
} else {
   printf("bill: ₹0");
}
 
return 0;
}
