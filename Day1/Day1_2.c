/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main() {
	printf("Program to input two numbers and display their sum, difference, product, and quotient.\n\n");
	
	int num1, num2, sum, diff, product;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	sum = num1+num2;
	diff = num1-num2;
	product = num1*num2;
	
	
	
	printf("Sum: %d, Diff: %d, Product: %d, ", sum, diff, product);
	
	# To handle division by zero!
	if ( num2 != 0 )
		{
		int quotient = num1/num2;
		printf("Quotient: %d\n\n", quotient);
		}
	else
	{
		printf("Quotient: Undefined (division by zero)\n\n");
	}
	

	return 0;
}
