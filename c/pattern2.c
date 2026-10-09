#include <stdio.h>
void print(int n, int row, int col, int num) {
    if (row > n)
        return;
    if (col > row) {
        printf("\n");
        print(n, row + 1, 1, num);
        return;
    }
    printf("%d ", num);
    print(n, row, col + 1, num + n - col);
}
int main() {
    int n;
    scanf("%d", &n);
    print(n, 1, 1, 1);
    return 0;
}
