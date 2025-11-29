//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0' && str1[len1] != '\n') len1++;
    while (str2[len2] != '\0' && str2[len2] != '\n') len2++;

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    char temp[2000];
    for (int i = 0; i < len1; i++) temp[i] = str1[i];
    for (int i = 0; i < len1; i++) temp[i + len1] = str1[i];

    int isRotation = 0;
    for (int i = 0; i < len1; i++) {
        int match = 1;
        for (int j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            isRotation = 1;
            break;
        }
    }

    if (isRotation)
        printf("Rotation\n");
    else
        printf("Not rotation\n");
    return 0;
}


















//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int start = 0;
    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            for (int j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }
            if (str[i] == ' ') printf(" ");
            start = i + 1;
        }
        if (str[i] == '\0' || str[i] == '\n') break;
    }
    return 0;
}
