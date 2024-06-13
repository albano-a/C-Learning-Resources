#include <stdio.h>

int main() {

    float ti;

    printf("Enter taxable income: ");
    scanf("%f", &ti);

    if (ti < 750) {
        float amount = 0.01 * ti;
        printf("Tax due: $%.2f.", amount);
    } else if (ti >= 750 && ti < 2250) {
        float amount = 7.50 + 0.02 * 750;
        printf("Tax due: $%.2f.", amount);
    } else if (ti >= 2250 && ti < 3750) {
        float amount = 37.50 + 0.03 * 2250; 
        printf("Tax due: $%.2f.", amount);
    } else if (ti >= 3750 && ti < 5250) {
        float amount = 82.50 + 0.04 * 3750;
        printf("Tax due: $%.2f.", amount);
    } else if (ti >= 5250 && ti <= 7000) {
        float amount = 142.50 + 0.05 * 5250;
        printf("Tax due: $%.2f.", amount);
    } else if (ti > 7000) {
        float amount = 230.00 + 0.06 * 7000;
    } else {
        printf("Error");
    }

    return 0;
}