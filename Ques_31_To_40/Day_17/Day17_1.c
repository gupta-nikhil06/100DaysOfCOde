/*
Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <math.h>
#include <stdio.h>

int main() {
    int num, d, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    int count = 0;
    while (temp > 0) {
        d = temp % 10;
        temp = temp / 10;
        count = count + 1;
    }

    temp = num;
    while (temp > 0) {
        d = temp % 10;
        temp = temp / 10;
        sum = sum + pow(d, count);
    }

    if (num == sum) {
        printf("%d is armstrong number\n", num);
    } else {
        printf("%d is not armstrong number\n", num);
    }

    return 0;
}