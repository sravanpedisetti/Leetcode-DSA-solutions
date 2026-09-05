/*
 * Problem: Reverse an Array in-place
 * Approach: Two-Pointer Technique
 * Time Complexity: O(n) - Loops through half the array
 * Space Complexity: O(1) - Modifies the original array without extra memory
 */

#include <stdio.h>

// Function to reverse the array using two pointers
void reverseArray(int arr[], int size) {
    int start = 0;          // Pointer at the beginning
    int end = size - 1;     // Pointer at the end
    int temp;

    // Swap elements from both ends moving inward
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++; // Move right
        end--;   // Move left
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    // Call the DSA function
    reverseArray(arr, size);

    printf("Reversed array: ");
    printArray(arr, size);

    return 0;
}
