/*
Q95: Check if one string is a rotation of another.

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

int is_rotation(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 == 0 || len2 == 0) {
        printf("Not rotation\n");
        return 0;
    }
    
    if (len1 != len2) {
        return 0;
    }
    
    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);
    
    return strstr(temp, str2) != NULL;
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string:\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string:\n");
    fgets(str2, sizeof(str2), stdin);
    
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    if (is_rotation(str1, str2)) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    
    return 0;
}