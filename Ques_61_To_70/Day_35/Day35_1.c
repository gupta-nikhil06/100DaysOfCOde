/*
Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int findSecondLargest(int arr[], int n);

int main() {
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest != -1) {
        printf("The second largest element is: %d\n", secondLargest);
    } else {
        printf("There is no second largest element.\n");
    }
    return 0;
}

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return -1; 
    }
    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}