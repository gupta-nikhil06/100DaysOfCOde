/*
Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/

#include <stdio.h>

int mostFrequent(long long num);

int main() {
    long long num;
    printf("Enter an integer number: ");
    scanf("%lld", &num);
    int result = mostFrequent(num);
    printf("The digit that occurs the most times is: %d\n", result);
    return 0;
}

int mostFrequent(long long num) {
    int count[10] = {0};
    int maxCount = 0;
    int mostFrequentDigit = -1;
    if (num < 0) {
        num = -num;
    }
    if (num == 0) {
        return 0;
    }
    while (num > 0) {
        int d = num % 10;
        count[d]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }
    return mostFrequentDigit;
}
