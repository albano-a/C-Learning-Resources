#include <stdio.h>

#define TRUE 1
#define FALSE 0

int square(int n){
    int k = 0;
    while (TRUE) {
        if (k == n*n) {
            return k;
        }
        k++;
    }
}

int main(int argc, char const *argv[])
{
    int s = square(4);

    printf("The square is %d", s);
    return 0;
}
