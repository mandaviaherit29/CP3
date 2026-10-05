#include <stdio.h>
int main() {
    long long n, square, divisor, last;
    scanf("%lld", &n);
    square = n * n;
    divisor = 1;
    if (n == 0) divisor = 10;
    else {
        long long temp = n;
        while (temp > 0) {
            divisor *= 10;
            temp /= 10;
        }
    }
    last = square % divisor;
    if (last == n) printf("Automorphic");
    else printf("Not Automorphic");
    return 0;
}
