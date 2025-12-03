//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90
*/

#include <stdio.h>

enum Status { VALID, INVALID };   // just to use enum as required

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    enum Status flag = VALID;

    // Input
    printf("enter name:");
    scanf("%s", s.name);
    printf("enter roll number:");
    scanf("%d", &s.roll_no);
    printf("enter marks:");
    scanf("%d", &s.marks);

    if(flag == VALID) {
        printf("Name: %s\n Roll:%d\n Marks:%d\n", s.name, s.roll_no, s.marks);
    }

    return 0;
}
