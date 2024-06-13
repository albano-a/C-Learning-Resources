#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0 && number <= 9) {
        printf("The number %d has 1 digit", number);
    } else if (number >= 10 && number <= 99) {
        printf("The number %d has 2 digits.", number);
    } else if (number >= 100 && number <= 999) {
        printf("The number %d has 3 digits.", number);
    } else {
        printf("This number does not fit here!");
    };

    return 0;
}
