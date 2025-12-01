//C program that uses a non-recursive function to search for a key value in a
//given list of integers using the linear search method.
#include <stdio.h>
int linearSearch(int a[], int n, int key) {
 int i;
 for (i = 0; i < n; i++) {
 if (a[i] == key)
 return i; // return position
 }
 return -1; // not found
}
int main() {
 int a[50], n, key, i, pos;
 printf("Enter number of elements: ");
 scanf("%d", &n);
 printf("Enter the elements:\n");
 for (i = 0; i < n; i++)
 scanf("%d", &a[i]);
 printf("Enter key value to search: ");
 scanf("%d", &key);
 pos = linearSearch(a, n, key);
 if (pos == -1)
 printf("Key not found\n");
 else
 printf("Key found at position %d\n", pos);
 return 0;
}
