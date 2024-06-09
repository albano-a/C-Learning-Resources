#include <stdio.h>

int main() {
    float x;
    printf("Enter a value for x: ");
    scanf("%f", &x);

    float five = 3 * x * x * x * x * x;
    float four = 2 * x * x * x * x;
    float three = 5 * x * x * x;
    float two = x * x;
    float one = 7 * x;
    float zero = 6;

    float final_eq = five + four - three - two + one - zero;
    float corr_eq = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;

    printf("The result of the polynomial is %.2f\n", final_eq);
    printf("The result of the polynomial is %.2f\n", corr_eq);

}