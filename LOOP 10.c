#include <stdio.h>
int main() {
    int n;
    long long fact = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) fact *= i;
    printf("%lld", fact);
    return 0;
}
