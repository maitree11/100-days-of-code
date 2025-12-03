//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/

#include <stdio.h>
#include <string.h>

typedef enum {
    NAME,
    ROLL_NO,
    MARKS
} StudentField;

typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

Student getTopStudent() {
    Student topStudent;
    strcpy(topStudent.name, "Alice");
    topStudent.roll_no = 101;
    topStudent.marks = 95.75;
    return topStudent;
}

void printStudentDetail(Student s, StudentField field) {
    switch(field) {
        case NAME:
            printf("Name: %s\n", s.name);
            break;
        case ROLL_NO:
            printf("Roll No: %d\n", s.roll_no);
            break;
        case MARKS:
            printf("Marks: %.2f\n", s.marks);
            break;
        default:
            printf("Invalid field\n");
    }
}

int main() {
    Student top = getTopStudent();

    printStudentDetail(top, NAME);
    printStudentDetail(top, ROLL_NO);
    printStudentDetail(top, MARKS);

    return 0;
}
