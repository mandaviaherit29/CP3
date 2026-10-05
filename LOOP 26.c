#include <stdio.h>
int main() {
    int n, original, sum = 0, digit;
    scanf("%d", &n);
    original = n;
    if (n < 0) n = -n;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    if (sum == original) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
