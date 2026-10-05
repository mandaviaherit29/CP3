#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0) sum += i;
    if (sum == n) printf("Perfect Number");
    else printf("Not Perfect Number");
    return 0;
}
