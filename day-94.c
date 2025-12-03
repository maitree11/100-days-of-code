//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92
*/

#include <stdio.h>
enum Grade { FAIL, PASS, MERIT, DISTINCTION };

struct Student {
    char name[50];
    int roll_no;
    int marks;
    enum Grade g;        // enum member inside structure
};

// Function that accepts structure as parameter
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll_no);
    printf("Marks: %d\n", s.marks);

    printf("Grade: ");
    switch(s.g) {
        case FAIL:        
            printf("FAIL"); 
            break;
        case PASS:        
            printf("PASS"); 
            break;
        case MERIT:       
            printf("MERIT"); 
            break;
        case DISTINCTION: 
            printf("DISTINCTION"); 
            break;
    }
}

int main() {
    struct Student st;

    scanf("%s", st.name);
    scanf("%d", &st.roll_no);
    scanf("%d", &st.marks);

    // assign enum based on marks
    if(st.marks < 40) st.g = FAIL;
    else if(st.marks < 60) st.g = PASS;
    else if(st.marks < 80) st.g = MERIT;
    else st.g = DISTINCTION;

    printStudent(st);
    return 0;
}
