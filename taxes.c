#include <stdio.h>

#define TAX 1.05

int main() {
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    float taxes = amount * TAX;
    printf("With tax added: %.2f", taxes);
}