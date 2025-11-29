//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/

#include <stdio.h>

int main() {
    char date[20], day[3], month[3], year[5];
    fgets(date, sizeof(date), stdin);

    int i = 0, j = 0;
    while (date[i] != '/' && date[i] != '\0' && date[i] != '\n') {
        day[j++] = date[i++];
    }
    day[j] = '\0';
    i++; // skip '/'

    j = 0;
    while (date[i] != '/' && date[i] != '\0' && date[i] != '\n') {
        month[j++] = date[i++];
    }
    month[j] = '\0';
    i++; // skip '/'

    j = 0;
    while (date[i] != '\0' && date[i] != '\n') {
        year[j++] = date[i++];
    }
    year[j] = '\0';

    if (month[0]=='0' && month[1]=='4') printf("%s-Apr-%s\n", day, year);
    else printf("%s-%s-%s\n", day, month, year);

    return 0;
}


























//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (!(i == len-1 && j == len-1)) printf(",");
        }
    }
    printf("\n");
    return 0;
}
