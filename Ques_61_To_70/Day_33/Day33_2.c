/*Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int insertElement(int arr[], int n, int element);

int main() {
    int n, i, element;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter the elements of the sorted array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    n = insertElement(arr, n, element);
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int insertElement(int arr[], int n, int element) {
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element;
    return n + 1;
}
