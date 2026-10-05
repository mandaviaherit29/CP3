#include <stdio.h>
int main() {
    int n;
    float x, sum = 0, mean;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%f", &x);
        sum += x;
    }
    mean = sum / n;
    printf("Sum = %.2f\nMean = %.2f", sum, mean);
    return 0;
}
