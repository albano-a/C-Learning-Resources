#include <stdio.h>

int main()
{
    // nested loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter a # of rows: ");
    scanf("%d", &rows);

    printf("\nEnter a # of columns: ");
    scanf("%d", &columns);

    scanf("%c", &symbol); //clears \n from buffer

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", columns);
        }
        printf("\n");
    }

    return 0;
}