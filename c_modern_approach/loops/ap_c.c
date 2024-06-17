/* Program that approximates e by computing the value of a infinite series */

#include <stdio.h>
#include <math.h>

int main(){

    int n;

    printf("Enter value for n: ");
    scanf("%d", &n);

    float e = 1.0;
    float factorial = 1.0;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        e += 1.0 / factorial;
    }

    printf("Approximation of e: %f\n", e);

    return 0;
}