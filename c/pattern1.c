#include <stdio.h>
void pattern(int n, int i, int j) {
    if (i > n)
        return;
    if (j <= n) {
        printf("%d", j);
        pattern(n, i, j + 1);
    } else if (j <= 2 * n - 1) {
        printf("%d", 2 * n - j);
        pattern(n, i, j + 1);
    } else {
        printf("\n");
        pattern(n, i + 1, 1);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    pattern(n, 1, 1);
    return 0;
}
