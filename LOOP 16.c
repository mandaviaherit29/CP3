#include <stdio.h>
int main() {
    int x, largest, smallest;
    scanf("%d", &x);
    largest = smallest = x;
    for (int i = 2; i <= 100; i++) {
        scanf("%d", &x);
        if (x > largest) largest = x;
        if (x < smallest) smallest = x;
    }
    printf("Largest = %d\nSmallest = %d", largest, smallest);
    return 0;
}
