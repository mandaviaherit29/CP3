#include <stdio.h>
int main() {
    float x, sum = 0, mean;
    for (int i = 1; i <= 10; i++) {
        scanf("%f", &x);
        sum += x;
    }
    mean = sum / 10;
    printf("Sum = %.2f\nMean = %.2f", sum, mean);
    return 0;
}
