#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    if (argc < 4) {
        printf("Usage: %s sum <number1> <number2>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "sum") == 0) {
        int sum = atoi(argv[2]) + atoi(argv[3]);
        printf("The sum of %d and %d is %d\n", atoi(argv[2]), atoi(argv[3]), sum);
    } else if (strcmp(argv[1], "mul") == 0) {
        int mul = atoi(argv[2]) * atoi(argv[3]);
        printf("The multiplication of %d and %d is %d\n", atoi(argv[2]), atoi(argv[3]), mul);
    } else if (strcmp(argv[1], "sub") == 0) {
        int sub = atoi(argv[2]) - atoi(argv[3]);
        printf("The subtraction of %d and %d is %d\n", atoi(argv[2]), atoi(argv[3]), sub);
    } else if (strcmp(argv[1], "div") == 0) {
        float div = atof(argv[2]) / atof(argv[3]);
        printf("The division of %d and %d is %g\n", atoi(argv[2]), atoi(argv[3]), div);
    } else if (strcmp(argv[1], "fat") == 0) {
        int fat = 1;
        for (int i = 1; i <= atoi(argv[2]); i++) {
            fat *= i;
        }
        printf("The factorial of %d is %d\n", atoi(argv[2]), fat);
    } else if (strcmp(argv[1], "pot") == 0) {
        int pot = 1;
        for (int i = 0; i < atoi(argv[3]); i++) {
            pot *= atoi(argv[2]);
        }
        printf("%d to the power of %d is %d\n", atoi(argv[2]), atoi(argv[3]), pot);
    } else if (strcmp(argv[1], "sqrt") == 0) {
        float sqrtResult = sqrt(atof(argv[2]));
        printf("The square root of %f is %g\n", atof(argv[2]), sqrtResult);
    } else {
        printf("Invalid operation: %s\n", argv[1]);
    }

    return 0;
}