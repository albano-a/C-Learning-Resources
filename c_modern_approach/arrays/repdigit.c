/* Checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int digit_count[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    long original_n = n;

    while (n > 0)
    {
        digit = n % 10;
        digit_count[digit]++;
        n /= 10;
    }

    printf("Digit:      ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\nOccurrences:");
    for (int i = 0; i < 10; i++) {
        printf("%d ", digit_count[i]);
    }
    printf("\n");
    
    printf("\n");

    return 0;
}
