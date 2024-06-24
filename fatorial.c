#include <stdio.h>

int fatorial(int num) {
    int prod = 1;
    for (int i = 1; i <= num; i++) {
        prod *= i;
    }
    return prod;
    
}

int main(){

    int number;

    printf("Enter a value: ");
    scanf("%d", &number);

    int result;
    result = fatorial(number);

    printf("The factorial of %d is %d", number, result);

    return 0;
}