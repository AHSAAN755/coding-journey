//Write a program to find the sum of array elements using a function that takes an array as an
//argument                                                                                                                                                                                                                             #include <stdio.h>

#include<stdio.h>
// Function declaration
int findSum(int arr[], int n);

int main() {
    int n, i, sum;
    int arr[100];

    // Input number of elements
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function
    sum = findSum(arr, n);

    // Display result
    printf("Sum of all elements = %d\n", sum);

    return 0;
}

// Function definition
int findSum(int arr[], int n) {
    int i, sum = 0;

    for (i = 0; i < n; i++) {
        sum += arr[i];  
    }

    return sum;  
}
