/*Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>

char firstRepeatingLowercase(char str[]) {
    int count[26] = {0}; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
            if (count[str[i] - 'a'] == 2) {
                return str[i];
            }
        }
    }
    return '\0'; 
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    str[strcspn(str, "\n")] = 0; 
    char result = firstRepeatingLowercase(str);
    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    return 0;
}