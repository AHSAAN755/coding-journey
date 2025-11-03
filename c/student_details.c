#include <stdio.h>

int main() {
    char name[50];
    int rollNo;

    printf("Enter Student Name:");
    scanf("%s", &name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("\n--- Student Details ---\n");
    printf("Name    : %s\n", name);
    printf("Roll No : %d\n", rollNo);
    return 0;
}

