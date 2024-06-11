/* Calculates a broker's commission */

#include <stdio.h>

int main(){
    float commission, value;

    printf("Enter a value of trade: ");
    scanf("%f", &value);

    if (value < 2500.00f) {
        commission = 30.00f + .017f * value;
    } else if (value < 6250.00f){
        commission = 56.00f + .0066f * value;
    } else if (value < 20000.00){
        commission = 76.00 + 0.0034 * value;
    } else if (value < 50000.00){
        commission = 100.00 * 0.0022 * value;
    } else if (value < 500000.00f) {
        commission = 155.00 + 0.0011 * value;
    } else {
        commission = 255.00 + 0.0009 * value;
    }

    if (commission < 39.00) {
        commission = 39.00;
    }

    printf("Commission: $%.2f\n", commission);

    return 0;
}
