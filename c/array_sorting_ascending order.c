// C program that sorts the given array of integers using the insertion sort in ascending order.
#include <stdio.h>
int main() {
 int a[50], n, i, j, key;
 printf("Enter number of elements: ");
 scanf("%d", &n);
 printf("Enter the elements:");
 for (i = 0; i < n; i++)
 scanf("%d", &a[i]);
 // Insertion Sort (Ascending)
 for (i = 1; i < n; i++) {
 key = a[i];
 j = i - 1;
 // Shift larger values to the right
 while (j >= 0 && a[j] > key) {
 a[j + 1] = a[j];
 j--;
 }
 a[j + 1] = key;
 }
 printf("Sorted array in ascending order:\n");
 for (i = 0; i < n; i++)
 printf("%d ", a[i]);
 return 0;
}
