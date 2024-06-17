#include <stdio.h>

int main() {
    int d, n;
    n = 80;

    for (d = 2; d < n; d++) {
        if (n % d == 0) {
            goto done;
        }
    }
    done:
    if (d < n) {
        printf("%d is divisible by %d\n", n, d);
    } else {
        printf("%d is prime\n", n);
    }
    return 0;
}