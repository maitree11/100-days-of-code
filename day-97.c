//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;

    // Input employee data
    scanf("%s", e1.name);
    scanf("%d", &e1.id);
    scanf("%f", &e1.salary);

    // Write to binary file
    FILE *fp = fopen("employee.bin", "wb");
    if(!fp) {
        printf("File error");
        return 0;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Employee details entered and stored in file.\n");

    // Read from binary file
    fp = fopen("employee.bin", "rb");
    if(!fp) {
        printf("File error");
        return 0;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Displays employee data read from file.\n");
    printf("Name: %s | ID: %d | Salary: %.2f",
           e2.name, e2.id, e2.salary);

    return 0;
}
