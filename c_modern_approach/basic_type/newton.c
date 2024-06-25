#include <stdio.h>
#include <math.h>

int main(){

    double x, y;
    y = 1.0;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    double old_y = y;
    do {
        old_y = y;
        y = ((x / y) + y) / 2;
    } while (fabs(old_y - y) > 0.00001 * y);

    printf("Square root %lf\n", y);
    
    return 0;
}