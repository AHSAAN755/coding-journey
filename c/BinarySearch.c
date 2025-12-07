//C program that uses a non-recursive function to search for a key value in a
//given sorted list of integers using the binary search method.
#include <stdio.h>
int binarySearch(int a[], int n, int key) {
 int low = 0, high = n - 1, mid;
 while (low <= high) {
 mid = (low + high) / 2;
 if (a[mid] == key)
 return mid; // key found
 else if (key < a[mid])
 high = mid - 1; // search left half
 else
 low = mid + 1; // search right half
 }
 return -1; // key not found
}
int main() {
 int a[50], n, key, i, pos;
 printf("Enter number of elements (sorted list): ");
 scanf("%d", &n);
 printf("Enter the elements in sorted order:\n");
 for (i = 0; i < n; i++)
 scanf("%d", &a[i]);
 printf("Enter key value to search: ");
 scanf("%d", &key);
 pos = binarySearch(a, n, key);
 if (pos == -1)
 printf("Key not found\n");
 else
 printf("Key found at position %d\n", pos);
 return 0; } // end of main()
