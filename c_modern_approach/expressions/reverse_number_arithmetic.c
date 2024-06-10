#include <stdio.h>

int main() {
    int number;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    int first_digit = number / 10;
    int second_digit = number % 10;

    printf("%d%d", second_digit, first_digit);

    return 0;
}
