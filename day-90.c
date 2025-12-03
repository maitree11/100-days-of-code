//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/

#include <stdio.h>
#include <string.h>

typedef enum {
    MALE,
    FEMALE,
    OTHER,
    UNKNOWN
} Gender;

typedef struct {
    Gender gender; // The enum is a member of the struct
} Person;

int main() {
    Person p1;
    char inputBuffer[50];
    char *valuePart;

    scanf("%s", inputBuffer);

    char *equalsSign = strchr(inputBuffer, '=');

    if (equalsSign) {
        valuePart = equalsSign + 1;
    } else {
        valuePart = inputBuffer;
    }

    if (strcmp(valuePart, "MALE") == 0) {
        p1.gender = MALE;
    } else if (strcmp(valuePart, "FEMALE") == 0) {
        p1.gender = FEMALE;
    } else if (strcmp(valuePart, "OTHER") == 0) {
        p1.gender = OTHER;
    } else {
        p1.gender = UNKNOWN;
    }

    switch (p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown Gender\n");
            break;
    }

    return 0;
}
