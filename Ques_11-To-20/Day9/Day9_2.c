/*
Q18: Write a program to assign grades based on a percentage input.

90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include <stdio.h>

int main() {
    printf("Program to assign grades based on a percentage input.\n\n");
    int percentage;

    printf("Enter the percentage: ");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade B\n");
    } else if (percentage >= 70 && percentage < 80) {
        printf("Grade C\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("Grade D\n");
    } else if (percentage < 60 && percentage >= 0) {
        printf("Grade F\n");
    } else {
        printf("Invalid percentage input.\n");
    }

    return 0;
}
