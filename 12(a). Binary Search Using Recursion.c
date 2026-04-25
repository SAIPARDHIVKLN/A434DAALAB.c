Aim:
To search an element in a sorted array using the recursive binary search method.

Algorithm:

Start the program.
Read the number of elements in the array.
Read the sorted array elements.
Read the element to be searched.
Find the middle element of the array.
If the middle element is equal to the key, return its position.
If the key is smaller, search in the left half recursively.
If the key is greater, search in the right half recursively.
If the element is not found, return -1.
Display the result.
Stop the program.

Code (C Program):

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;
    else if (key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, high, key);
}

int main() {
    int arr[100], n, key, result, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, 0, n - 1, key);

    if(result == -1)
        printf("Element not found");
    else
        printf("Element found at position %d", result + 1);

    return 0;
    }
    Result:
Thus, the element is successfully searched in the sorted array using the recursive binary search method.


  
