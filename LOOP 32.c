#include <stdio.h>
int main() {
    int count = 0;
    for (int n = 2; n <= 500; n++) {
        int flag = 1;
        for (int i = 2; i <= n / 2; i++)
            if (n % i == 0) {
                flag = 0;
                break;
            }
        if (flag) count++;
    }
    printf("%d", count);
    return 0;
}
