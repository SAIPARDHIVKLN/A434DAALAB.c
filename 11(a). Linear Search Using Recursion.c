Aim:
To search an element in an array using the recursive linear search method.

Algorithm:

Start the program.
Read the number of elements in the array.
Read the array elements.
Read the element to be searched.
Compare the current element with the key.
If the element matches, return its position.
Otherwise, call the function recursively for the next element.
If the end of the array is reached, return -1.
Display whether the element is found or not.
Stop the program.

Code (C Program):

#include <stdio.h>

int linearSearch(int arr[], int n, int key, int index) {
    if (index >= n)
        return -1;
    if (arr[index] == key)
        return index;
    return linearSearch(arr, n, key, index + 1);
}

int main() {
    int arr[100], n, key, result, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = linearSearch(arr, n, key, 0);

    if(result == -1)
        printf("Element not found");
    else
        printf("Element found at position %d", result + 1);

    return 0;
}

Result:
Thus, the element is successfully searched in the array using the recursive linear search method.
