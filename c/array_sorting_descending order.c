// C program that sorts the given array of integers using the selection sort in descending order.
#include <stdio.h>
int main() {
 int a[50], n, i, j, maxIndex, temp;
 printf("Enter number of elements: ");
 scanf("%d", &n);
 printf("Enter the elements:");
 for (i = 0; i < n; i++)
 scanf("%d", &a[i]);
 for (i = 0; i < n - 1; i++) {
 maxIndex = i;
 for (j = i + 1; j < n; j++) {
 if (a[j] > a[maxIndex])
 maxIndex = j;
 }
 temp = a[i];
 a[i] = a[maxIndex];
 a[maxIndex] = temp;
 }
 printf("Sorted array in descending order:\n");
 for (i = 0; i < n; i++)
 printf("%d ", a[i]);
 return 0;
}
