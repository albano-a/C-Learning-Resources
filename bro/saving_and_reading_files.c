#include <stdio.h>

int main()
{
    /*
    FILE *pF = fopen("C:\\Users\\Icarl\\Desktop\\text.txt", "a");

    fprintf(pF, "\nSpongebob Squarepants");

    fclose(pF);
    */

    // readin a file
    FILE *pF = fopen("C:\\Users\\Icarl\\Desktop\\poem.txt", "r");
    char buffer[255];

    if(pF == NULL)
    {
        printf("Unable to open file!\n");
    }
    else
    {
        while(fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }  
    }
    
    fclose(pF);
    
    /*
    if(remove("text.txt") == 0)
    {
        printf("That file was deleted successfully!");
    }
    else
    {
        printf("That file was not deleted");
    }
    */
    return 0;
}