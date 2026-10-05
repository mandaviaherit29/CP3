#include <stdio.h>
int main() {
    int n, positive = 0, negative = 0, zero = 0;
    for (int i = 1; i <= 100; i++) {
        scanf("%d", &n);
        if (n > 0) positive++;
        else if (n < 0) negative++;
        else zero++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d", positive, negative, zero);
    return 0;
}
