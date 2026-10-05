#include <stdio.h>
int main() {
    int n, a = 1, b = 1, c;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
