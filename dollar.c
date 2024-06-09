#include <stdio.h>

int main() {
    int twenty = 20;
    int ten = 10;
    int five = 5;
    int one = 1;
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    printf("$20 bills: %d\n", amount / twenty);
    amount %= twenty;
    printf("$10 bills: %d\n", amount / ten);
    amount %= ten;
    printf("$5 bills: %d\n", amount / five);
    amount %= five;
    printf("$1 bills: %d\n", amount / one);
    amount %= one;

}