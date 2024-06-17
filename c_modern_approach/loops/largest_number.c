#include <stdio.h>

int main(){
    float number, largest = 0.0;

    while(1) {
        printf("Enter a number: ");
        scanf("%f", &number);
        if (number <= 0){
            break;
        }
        if (number > largest) {
            largest = number;
        }
    }
    printf("The largest number netered was %.2f\n", largest);
}