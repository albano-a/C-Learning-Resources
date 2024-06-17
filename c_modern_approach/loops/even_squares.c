/* Program that prints all the even squares between 1 and n */

#include <stdio.h>

int main(){

    int n;

    printf("Enter a number n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            // Now, to see which ones are squares
            int x = 1;
            while (x * x <= i) {
                if (x * x == i) {
                    printf("%d\n", i);
                }
                x++;
            }
        }
    }

    return 0;
}