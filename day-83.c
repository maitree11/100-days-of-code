//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days
*/

#include <stdio.h>
#include <string.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char inputName[10];
    enum Month selectedMonth;
    int isValid = 1;
    printf("Enter month (e.g., JAN, FEB, MAR): ");
    scanf("%s", inputName);

    if (strcmp(inputName, "JAN") == 0)      selectedMonth = JAN;
    else if (strcmp(inputName, "FEB") == 0) selectedMonth = FEB;
    else if (strcmp(inputName, "MAR") == 0) selectedMonth = MAR;
    else if (strcmp(inputName, "APR") == 0) selectedMonth = APR;
    else if (strcmp(inputName, "MAY") == 0) selectedMonth = MAY;
    else if (strcmp(inputName, "JUN") == 0) selectedMonth = JUN;
    else if (strcmp(inputName, "JUL") == 0) selectedMonth = JUL;
    else if (strcmp(inputName, "AUG") == 0) selectedMonth = AUG;
    else if (strcmp(inputName, "SEP") == 0) selectedMonth = SEP;
    else if (strcmp(inputName, "OCT") == 0) selectedMonth = OCT;
    else if (strcmp(inputName, "NOV") == 0) selectedMonth = NOV;
    else if (strcmp(inputName, "DEC") == 0) selectedMonth = DEC;
    else isValid = 0; // If no match found

    if (isValid == 1) {
        switch(selectedMonth) {
            case JAN:
            case MAR:
            case MAY:
            case JUL:
            case AUG:
            case OCT:
            case DEC:
                printf("31 days\n");
                break;

            case APR:
            case JUN:
            case SEP:
            case NOV:
                printf("30 days\n");
                break;

            case FEB:
                printf("28 or 29 days\n");
                break;
        }
    } else {
        printf("Invalid month entered. Please use uppercase (e.g., JAN).\n");
    }

    return 0;
}
