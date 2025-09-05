/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main()
{

	printf("Program to calculate the area and perimeter of a rectangle given its length and breadth.\n\n");

	int length, breadth, area, perimeter;
	printf("Enter length of Rectangle: ");
	scanf("%d", &length);
	printf("Enter breadth of Rectangle: ");
	scanf("%d", &breadth);

	// Area

	area = length * breadth;

	// Perimeter

	perimeter = 2 * (length + breadth);

	printf("Area: %d, Perimeter: %d\n\n", area, perimeter);

	return 0;
}
