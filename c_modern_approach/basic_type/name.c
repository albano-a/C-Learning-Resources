#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name;

    printf("Enter a first and last name: ");
    char first_name = getchar();
    while(getchar() != ' '){
    }
    while((name = getchar()) != '\n'){
            printf("%c", name);
        }
    printf(", %c.", first_name);
    printf("\n");
    return 0;
}
