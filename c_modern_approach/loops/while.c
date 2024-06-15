#include <stdio.h>

int main() {

    int pwd;

    while (pwd != 123) {
        printf("Type the password: ");
        scanf("%d", &pwd);

        if (pwd != 123) {
            printf("Wrong password\n");
        }        
    }

    printf("Unlocked\n");

    return 0;
}
