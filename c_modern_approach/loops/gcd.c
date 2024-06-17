/* Greatest common divisor calculator */

#include <stdio.h>

int main(){
    int m, n;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while (n != 0) {
        int rem = m % n;
        m = n;
        n = rem;
        if (n == 0){
            printf("Greatest common divisor: %d", m);
            break;
        };
    }
}