/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main()
{

	printf("Program to input time in seconds and convert it to hours:minutes:seconds format.\n\n");

	int timeinSec;
	printf("Enter time in seconds: ");
	scanf("%d", &timeinSec);

	// Convert in format
	int hours, minutes, seconds;

	hours = timeinSec / 3600;
	minutes = (timeinSec % 3600) / 60;
	seconds = timeinSec % 60;

	printf("%d seconds= %d:%d:%d\n\n", timeinSec, hours, minutes, seconds);

	return 0;
}
