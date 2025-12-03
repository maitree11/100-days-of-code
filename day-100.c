//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;   // pointer to struct

    // Input using pointer
    scanf("%s", ptr->name);
    scanf("%d", &ptr->roll_no);
    scanf("%d", &ptr->marks);

    // Output
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
           ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}
