/* Calculates the fraction to lowest terms */

#include <stdio.h>

int main() {
    int m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    int a = m;
    int b = n;
    int rem;

    while (n != 0) {
        rem = m % n;
        m = n;
        n = rem;
    }
    // m is the gcd
    a /= m;
    b /= m;
    printf("In lowest terms: %d/%d\n", a, b);

    return 0;
}