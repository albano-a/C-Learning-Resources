/* One month calendar */

#include <stdio.h>

int main(){

    int month, dotw;

    printf("Enter number of days in month: ");
    scanf("%d", &month);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &dotw);

    for (int j = 1; j < dotw; j++) {
        printf("\t");
    }

    for (int i = 1; i <= month; i++) {
        printf("%d ", i);
        if ((dotw + i - 1) % 7 == 0)  {
            printf("\n");
        }
    }
    printf("\n");

    return 0;

    return 0;
}