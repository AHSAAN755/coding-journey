//program for reading elements using a pointer into an array and displaying the values using the array.
#include <stdio.h>
int main() {
int arr[100], n, i;
int *ptr;
printf("Enter number of elements: ");
scanf("%d", &n);
ptr = arr; printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", ptr + i); // same as &arr[i]
}
printf("Array elements are:\n");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}
