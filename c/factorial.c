//Write a c program to find the factorial of a given number?                                                                                                                      #include <stdio.h>
#include<stdio.h>
int main() {
    int n, i;
    unsigned long long factorial = 1;  

    printf("Enter a number: ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;  
        }
        printf("Factorial of %d = %11u\n", n, factorial);
    }

    return 0;
}
