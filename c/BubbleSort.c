// C program that implements the Bubble sort method to sort a given list of
//integers in ascending order.
#include <stdio.h>
int main() {
 int a[50], n, i, j, temp;
 printf("Enter number of elements: ");
 scanf("%d", &n);
 printf("Enter the elements:");
 for (i = 0; i < n; i++)
 scanf("%d", &a[i]);
 for (i = 0; i < n - 1; i++) {
 for (j = 0; j < n - i - 1; j++) {
 if (a[j] > a[j + 1]) { // Swap
 temp = a[j];
 a[j] = a[j + 1];
 a[j + 1] = temp;
 }
 }
 }
 printf("Sorted list in ascending order:\n");
 for (i = 0; i < n; i++)
 printf("%d ", a[i]);
 return 0;
}
