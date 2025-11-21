//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10
*/

#include <stdio.h>
int main() {
    int n, i;
    printf("enter a number: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
}














//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1
*/

#include <stdio.h>
int main() {
    int n1, n2;
    int i;
    int hcf;

    printf("enter first number: ");
    scanf("%d", &n1);
    printf("enter second number: ");
    scanf("%d", &n2);

    for (i=1; i <= n1 && i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
        hcf = i;
        }
    }
printf("HCF is %d", hcf);
return 0;
}
