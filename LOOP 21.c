#include <stdio.h>
int main() {
    int n, digit;
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
        return 0;
    }
    if (n < 0) n = -n;
    int a[20], count = 0;
    while (n > 0) {
        a[count++] = n % 10;
        n /= 10;
    }
    for (int i = count - 1; i >= 0; i--) printf("%d ", a[i]);
    return 0;
}
