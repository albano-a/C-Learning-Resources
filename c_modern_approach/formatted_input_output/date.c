#include <stdio.h>

int main(){
    int day;
    int month;
    int year;

    printf("Enter a date (mm/dd/yyyy): ");
    // Input is 2/17/2011
    scanf("%d/%d/%d", &month, &day, &year);

    printf("%d%.2d%.2d", year, month, day);
    // Output should be 20110217
}