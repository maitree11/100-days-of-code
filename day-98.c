//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s1, s2;

    // Input for first student
    scanf("%s", s1.name);
    scanf("%d", &s1.roll_no);
    scanf("%d", &s1.marks);

    // Input for second student
    scanf("%s", s2.name);
    scanf("%d", &s2.roll_no);
    scanf("%d", &s2.marks);

    // Compare the structures
    if(strcmp(s1.name, s2.name) == 0 &&
       s1.roll_no == s2.roll_no &&
       s1.marks == s2.marks)
    {
        printf("Same\n");
    }
    else {
        printf("Different\n");
    }

    return 0;
}
