/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    char operation[10];
    int a, b;
    printf("Enter operation (ADD, SUBTRACT, MULTIPLY) and two integers: ");
    scanf("%s %d %d", operation, &a, &b);

    enum Menu choice;

    if (strcmp(operation, "ADD") == 0) {
        choice = ADD;
    } else if (strcmp(operation, "SUBTRACT") == 0) {
        choice = SUBTRACT;
    } else if (strcmp(operation, "MULTIPLY") == 0) {
        choice = MULTIPLY;
    } else {
        printf("Invalid operation\n");
        return 1;
    }

    int result;
    switch (choice) {
        case ADD:
            result = a + b;
            break;
        case SUBTRACT:
            result = a - b;
            break;
        case MULTIPLY:
            result = a * b;
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    printf("%d\n", result);
    return 0;
}