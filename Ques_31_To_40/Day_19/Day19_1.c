/*
Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main() {
    int n1, n2;
    int i = 1;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    while (i <= n1 * n2) {
        if (i % n1 == 0 && i % n2 == 0) {
            printf("%d is LCM of %d and %d\n", i, n1, n2);
            break;
        }

        i++;
    }

    return 0;
}
