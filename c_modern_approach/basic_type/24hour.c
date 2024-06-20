#include <stdio.h>

int main(){
    
    int hour, min;
    char ap, m;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c%c", &hour, &min, &ap, &m);

    if (ap == 'P' && hour != 12){
        hour = hour + 12;
    } else if (ap == 'A' && hour == 12){
        hour = 0;
    }
    
    printf("Equivalent 24-hour time: %02d:%02d", hour, min);

    return 0;
}
