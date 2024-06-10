#include <stdio.h>

int main() {
    int number;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);   

    int last_digit = number % 8;
    number /= 8;
    int second_last_digit = number % 8;
    number /= 8;
    int third_last = number % 8;
    number /= 8;
    int fourth_last = number % 8;
    number /= 8;
    int fifth = number % 8;

    printf("O%1d%1d%1d%1d%1d", fifth, fourth_last, third_last, second_last_digit, last_digit);



    return 0;
}
