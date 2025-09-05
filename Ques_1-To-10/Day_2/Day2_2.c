/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>

int main()
{

	printf("Program to calculate the area and circumference of a circle given its radius.\n\n");

	float radius, area, perimeter;
	printf("Enter radius of circle: ");
	scanf("%f", &radius);

	// area
	area = 3.14 * radius * radius;

	// perimeter

	perimeter = 2 * 3.14 * radius;

	printf("Area: %f, Perimeter: %f\n\n", area, perimeter);

	return 0;
}
