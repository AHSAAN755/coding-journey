//program to display values in reverse order from an array using a pointer.
#include <stdio.h>
int main() {
int arr[100], n, i;
int *ptr;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
// Pointer points to the last element of array
ptr = &arr[n - 1];
printf("Array elements in reverse order:\n");
for (i = n - 1; i >= 0; i--) {
printf("%d ", *ptr);
ptr--; // move pointer backward
}
return 0;
}

