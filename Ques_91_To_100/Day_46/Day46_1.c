/*
Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
#include <string.h>

void removeVowels(char str[]) {
    int i, j = 0;
    char result[strlen(str) + 1];

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("%s\n", result);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    str[strcspn(str, "\n")] = 0; 
    removeVowels(str);
    return 0;
}