#include <stdio.h>

int main() {
    int n = 3;

    if (n < 0) {
        printf("n is less than 0\n");
    } else {
        if (n == 0) {
            printf("n is equal to 0\n");
        } else {
            printf("n is greater than 0\n");
        }
    }
}
