#include <stdio.h>
int main() {
    int n, original, reverse = 0;
    scanf("%d", &n);
    original = n;
    if (n < 0) n = -n;
    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    if (original >= 0 && original == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
