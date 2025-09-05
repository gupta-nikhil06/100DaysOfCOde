/*
Q11: Write a program to input an integer and check whether it is even or odd using if–else.

Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include <stdio.h>

int main()
{

	printf("Program to input an integer and check whether it is even or odd using if–else.\n\n");

	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	if (number % 2 == 0)
	{
		printf("%d is even\n", number);
	}
	else
	{
		printf("%d is odd\n", number);
	}

	return 0;
}
