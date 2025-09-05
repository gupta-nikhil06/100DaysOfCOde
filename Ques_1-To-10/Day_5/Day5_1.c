/*
Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>

int main()
{

    printf("Program to calculate simple and compound interest for given principal, rate, and time.\n\n");
    float principal, rate, time, amount, d, compoundInterest, simpleInterest, difference;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;
    // Calculate Compound Interest
    d = 1 + (rate / 100);
    amount = principal * pow(d, time);
    compoundInterest = amount - principal;

    printf("Simple Interest: %.2f, Compound Interest: %.2f \n\n", simpleInterest, compoundInterest);

    return 0;
}
