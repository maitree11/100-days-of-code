//Q142: 12

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];
    int i;

    printf("Enter details for 5 students (Name Roll Marks):\n");
    for (i = 0; i < 5; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    printf("\n--- Student Records ---\n");
    printf("%-15s %-10s %-10s\n", "Name", "Roll No", "Marks"); // Header

    for (i = 0; i < 5; i++) {
        printf("%-15s %-10d %-10d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
