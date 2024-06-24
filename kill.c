#include <stdio.h>

int main(int argc, char const *argv[])
{
    if (argc > 1) {
        // If there is at least one argument, print the first one.
        printf("Received argument: %s\n", argv[1]);
    } else {
        // If there is no argument, print a message.
        printf("No arguments received.\n");
    }
    

    return 0;
}
