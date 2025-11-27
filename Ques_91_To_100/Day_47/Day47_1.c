/*
Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

#define MAX 100
#define CHAR 256

int areAnagrams(char *str1, char *str2) {
    int count[CHAR] = {0};
    int i;

    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    for (i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (i = 0; i < CHAR; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str1[MAX], str2[MAX];

    printf("Enter first string: ");
    fgets(str1, MAX, stdin);
    str1[strcspn(str1, "\n")] = 0; 

    printf("Enter second string: ");
    fgets(str2, MAX, stdin);
    str2[strcspn(str2, "\n")] = 0; 

    if (areAnagrams(str1, str2)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}