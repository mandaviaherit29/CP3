#include <stdio.h>
int main() {
    int n, reverse = 0, digit;
    scanf("%d", &n);
    int temp = n < 0 ? -n : n;
    while (temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    if (n < 0) reverse = -reverse;
    printf("%d", reverse);
    return 0;
}
